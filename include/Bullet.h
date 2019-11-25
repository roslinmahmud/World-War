#ifndef BULLET_H
#define BULLET_H
#include <GL/glut.h>
#include <vector>

using namespace std;

class Bullet{
public:
    double yu = -40;
    double yd = -45;
    double scaleX = 1;
    double scaleY = 1;
    double x;

    // explosion variables
    bool explode=false;
    double scatterX[7]={0,0,0,0,0,0,0};
    double scatterY[7]={0,0,0,0,0,0,0};
    double kx=0.15;
    double ky=0.1;
    bool halfPattern=false;

    double colPosU=0;
    double colPosX=0;

    Bullet(){
    }

    Bullet(double x){
        this->x = x;
    }
    void draw(){
        //x*=scaleX;
        yu*=scaleY;
        yd*=scaleY;
        glPushMatrix();
        glColor3ub(111, 54, 59);
        glBegin(GL_POLYGON);
            glVertex2f(x+0.8, yu);
            glVertex2f(x, yu+3*scaleY);
            glVertex2f(x-0.8, yu);
            glVertex2f(x-0.8, yd);
            glVertex2f(x+0.8, yd);
        glEnd();
        glPopMatrix();
        return;
    }

        void explosion(int i)
        {
            glPushMatrix();
            glTranslatef(scatterX[i], scatterY[i], 0);
            glColor3ub(227, 35, 149);
            //glColor3ub(202, 43, 32);
            glBegin(GL_POLYGON);
            glVertex2f(colPosX-0.5, -2+colPosU);
            glVertex2f(colPosX-1, -0.6+colPosU);
            glVertex2f(colPosX-1, 0.6+colPosU);
            glVertex2f(colPosX-0.5, 2+colPosU);
            glVertex2f(colPosX+0.5, 2+colPosU);
            glVertex2f(colPosX+1, 0.6+colPosU);
            glVertex2f(colPosX+1, -0.6+colPosU);
            glVertex2f(colPosX+0.5, -2+colPosU);
            glEnd();
            glPopMatrix();
        }

    void updateY(double y){
        yu+=y;
        yd+=y;
        return;
    }
    double getX(){
        return x;
    }
};
Bullet missile;
std::vector <Bullet> bullet;

#endif // BULLET_H
