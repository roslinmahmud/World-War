#include <windows.h>
#include <GL/glut.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <math.h>

#include <Tank.h>
#include <Bullet.h>
#include <Control.h>
#include <Jet.h>
#include <Scene.h>
#include <Score.h>
#include <Sound.h>

using namespace std;

void init(){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
}

//Display function to render graphics
void display(){
    //cout << "Display" << '\n';
    glClear(GL_COLOR_BUFFER_BIT); // Refresh the screen default color
    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);

    drawScene();

    if(getShowFireCount()==0 || getLives()==0)
    {
        gameoverbool=true;
        gameOver();
    }


	// Explosion Effect
	if(missile.explode)
    {
        for(int i=0;i<7;i++)
        {
            missile.explosion(i);
            missile.scatterX[i]+=missile.kx;
            missile.scatterY[i]+=missile.ky;
            missile.kx-=0.05;
            if(i<3)
            {
                missile.ky+=0.015;
            }
            else
            {
                missile.ky-=0.015;
            }
        }
        missile.kx=0.15;
        missile.ky=0.07;
        if(missile.scatterY[3]+70>90)
        {
            missile.explode=false;
            for(int i=0;i<7;i++)
            {
                missile.scatterX[i]=0.1;
                missile.scatterY[i]=0.1;
            }
        }
    }
    // Explosion Effect

	if(!gameoverbool)
    {
        tank.draw();

        for(int i=0;i<jet.size();i++){
            jet[i].draw();
        }
        for(int i=0;i<bullet.size();i++){
            bullet[i].draw();
        }
    }

	scoreDetails();

	glutSwapBuffers();
    return;
}

void initJet(int value){
    Jet j(rand()%10+70);
    jet.push_back(j);
    glutTimerFunc(7500, initJet, 0);
}

void update(){
    for(int i=0;i<jet.size();i++){
        jet[i].updateX(-0.1);
    }

    for(int i=0;i<bullet.size();i++){
        bullet[i].updateY(0.1);
        //bullet[i].scaleX-=0.0000003;
        bullet[i].scaleY-=0.0000003;
    }
    return;
}

void checkBoundary(){
    for(int i=0;i<jet.size();i++){
        pair <double, double> x(jet[i].getX());
        if(x.first <= -120){

            // DEDUCT LIVES
            deductLives();
            jet.erase(jet.begin()+i);
        }
    }

    for(int i=0;i<bullet.size();i++){
        if((int)bullet[i].yu == 90){

            // SHOWFIRECOUNT
            setShowFireCount2();
            bullet.erase(bullet.begin()+i);
        }
    }
    //cout << "Bullet: " << bullet.size() << " " << "Plane: " << jet.size() << '\n';
    return;
}

void checkClash(){
    for(int i=0;i<bullet.size();i++){
        for(int j=0;j<jet.size();j++){
            if(jet[i].isHit(bullet[i].getX(), bullet[i].yu)){

                // FIRECOUNT
                setFireCount();
                // SHOWFIRECOUNT
                setShowFireCount1();

                // explosion
                missile.explode=true;
                planeExplosionSound();
                for(int i=0;i<7;i++)
                {
                    missile.scatterX[i]=0.1;
                    missile.scatterY[i]=0.1;
                }
                missile.colPosU=bullet[i].yu;
                missile.colPosX=bullet[i].getX();
                // explosion
                jet.erase(jet.begin()+j);
                bullet.erase(bullet.begin()+i);
            }
        }
    }
}

void idle(){
    update();
    checkBoundary();
    checkClash();

    // windmill spin
    angle+=1;

    glutPostRedisplay();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(866.666666, 645);
    glutInitWindowPosition(50, 50);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutCreateWindow("World War III");
    init();

    glutDisplayFunc(display);

    glutKeyboardFunc(keyboardFunc);
    glutSpecialFunc(specialKeyFunc);

    glutTimerFunc(5000, initJet, 0);

    glutIdleFunc(idle);

    glutMainLoop();

    return EXIT_SUCCESS;
}
