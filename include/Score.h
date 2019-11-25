#ifndef SCORE_H
#define SCORE_H

bool gameoverbool=false;
double x=0, x2=0;

int ammo=5;
int getAmmo()
{
    return ammo;
}

int showFireCount=ammo;
int getShowFireCount()
{
    return showFireCount;
}

int lives=3;
void deductLives()
{
    lives--;
}
int getLives()
{
    return lives;
}

void livesAndMissile()
{

    glTranslatef(0, -3, 0);
    //MISSILE_________________________________
    //M______________________________________
    glColor3ub(100, 30, 22);
    glBegin(GL_LINES);
    glVertex2f(-25,-75);
    glVertex2f(-25,-85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-25,-75);
    glVertex2f(-22.5,-77.5);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-22.5,-77.5);
    glVertex2f(-20,-75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-20,-75);
    glVertex2f(-20,-85);
    glEnd();
//I____________________________________

    glBegin(GL_LINES);
    glVertex2f(-17.5,-75);
    glVertex2f(-17.5,-85);
    glEnd();
//S______________________________________
    glTranslatef(95,0,0);

    glBegin(GL_LINES);
    glVertex2f(-110,-75);
    glVertex2f(-105,-75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-110,-80);
    glVertex2f(-110,-75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-110,-80);
    glVertex2f(-105,-80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-105,-80);
    glVertex2f(-105,-85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-105,-85);
    glVertex2f(-110,-85);
    glEnd();
    glLoadIdentity();
    gluOrtho2D(-120,120,-90,90);



    glTranslatef(0, -3, 0);
    glTranslatef(102.5,0,0);

    glBegin(GL_LINES);
    glVertex2f(-110,-75);
    glVertex2f(-105,-75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-110,-80);
    glVertex2f(-110,-75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-110,-80);
    glVertex2f(-105,-80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-105,-80);
    glVertex2f(-105,-85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-105,-85);
    glVertex2f(-110,-85);
    glEnd();
    glLoadIdentity();
    gluOrtho2D(-120,120,-90,90);


    glTranslatef(0, -3, 0);
//I____________________________________________

    glBegin(GL_LINES);
    glVertex2f(0,-75);
    glVertex2f(0,-85);
    glEnd();
//L____________________________________________

    glBegin(GL_LINES);
    glVertex2f(2.5,-75);
    glVertex2f(2.5,-85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(2.5,-85);
    glVertex2f(7.5,-85);
    glEnd();
//E_________________________________
    glTranslatef(90,0,0);

    glBegin(GL_LINES);
    glVertex2f(-80,-75);
    glVertex2f(-80,-85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-80,-80);
    glVertex2f(-77.5,-80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-80,-75);
    glVertex2f(-75,-75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-80,-85);
    glVertex2f(-75,-85);
    glEnd();
//:____________________________________

    glBegin(GL_QUADS);
    glVertex2f(-72.5,-84);
    glVertex2f(-70,-84);
    glVertex2f(-70,-82);
    glVertex2f(-72.5,-82);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-72.5,-76);
    glVertex2f(-70,-76);
    glVertex2f(-70,-78);
    glVertex2f(-72.5,-78);
    glEnd();
    glLoadIdentity();
    gluOrtho2D(-120,120,-90,90);






    glTranslatef(-14, -3, 0);

    //L_____________________________________
    glColor3ub(100, 30, 22);
    glBegin(GL_LINES);
    glVertex2f(-97.5,-75);
    glVertex2f(-97.5,-85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-97.5,-85);
    glVertex2f(-92.5,-85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-90,-75);
    glVertex2f(-90,-85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-87.5,-75);
    glVertex2f(-85,-85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-85,-85);
    glVertex2f(-82.5,-75);
    glEnd();

//E________________________________

    glBegin(GL_LINES);
    glVertex2f(-80,-75);
    glVertex2f(-80,-85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-80,-80);
    glVertex2f(-77.5,-80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-80,-75);
    glVertex2f(-75,-75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-80,-85);
    glVertex2f(-75,-85);
    glEnd();


    glTranslatef(7, 0, 0);
    //:____________________________________

    glBegin(GL_QUADS);
    glVertex2f(-72.5,-84);
    glVertex2f(-70,-84);
    glVertex2f(-70,-82);
    glVertex2f(-72.5,-82);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-72.5,-76);
    glVertex2f(-70,-76);
    glVertex2f(-70,-78);
    glVertex2f(-72.5,-78);
    glEnd();

    glLoadIdentity();
    gluOrtho2D(-120,120,-90,90);


    // S _________________________


    glTranslatef(23, 0-3, 0);
    glBegin(GL_LINES);
    glVertex2f(-110,-75);
    glVertex2f(-105,-75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-110,-80);
    glVertex2f(-110,-75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-110,-80);
    glVertex2f(-105,-80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-105,-80);
    glVertex2f(-105,-85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-105,-85);
    glVertex2f(-110,-85);
    glEnd();

    glLoadIdentity();
    gluOrtho2D(-120,120,-90,90);


}




void health()
{

    for(int i=0;i<lives;i++)
    {
        glTranslatef(x2-5, -3, 0);

        glColor3ub(255, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(-62.5,-85);
        glVertex2f(-62.5,-77.5);
        glVertex2f(-65,-75);
        glVertex2f(-67.5,-77.5);
        glVertex2f(-67.5,-80);
        glEnd();
        glColor3ub(255, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(-57.5,-80);
        glVertex2f(-57.5,-77.5);
        glVertex2f(-60,-75);
        glVertex2f(-62.5,-77.5);
        glVertex2f(-62.5,-85);
        glEnd();

        glLoadIdentity();
        gluOrtho2D(-120,120,-90,90);

        x2+=13;

    }
    x2=0;

    glLoadIdentity();
    gluOrtho2D(-120,120,-90,90);

}




void drawScoreBackground()
{
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-120, -76.5);
    glVertex2f(-120, -75);
    glVertex2f(120, -75);
    glVertex2f(120, -76.5);
    glEnd();

    glColor3ub(255, 235, 59);
    glBegin(GL_QUADS);
    glVertex2f(-120, -90);
    glVertex2f(-120, -76);
    glVertex2f(120, -76);
    glVertex2f(120, -90);
    glEnd();

    livesAndMissile();
}

void setShowFireCount1()
{
    showFireCount++;
    if(showFireCount>ammo)
        showFireCount=ammo;
}

void setShowFireCount2()
{
    showFireCount--;
}

void displayFireCount()
{
    for(int i=0;i<showFireCount;i++)
    {
        glColor3ub(111, 54, 59);
        glBegin(GL_POLYGON);
        glVertex2f(30.25+x, -79.5);
        glVertex2f(33+x, -81);
        glVertex2f(37.5+x, -87);
        glVertex2f(35.5+x, -88.5);
        glVertex2f(31.5+x, -83);
        glEnd();
        x+=8;
    }
    x=0;
}

void scoreDetails()
{
    drawScoreBackground();
    displayFireCount();
    health();
}


void gameOver()
{
    //G____________________________________
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-85,5);
    glVertex2f(-80,5);
    glVertex2f(-80,10);
    glVertex2f(-85,15);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-92.5,10);
    glVertex2f(-87.5,10);
    glVertex2f(-85,7.5);
    glVertex2f(-85,15);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-100,10);
    glVertex2f(-92.5,10);
    glVertex2f(-85,15);
    glVertex2f(-95,15);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_TRIANGLES);
    glVertex2f(-100,10);
    glVertex2f(-95,7.5);
    glVertex2f(-92.5,10);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-100,-10);
    glVertex2f(-95,-7.5);
    glVertex2f(-95,7.5);
    glVertex2f(-100,10);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-100,-10);
    glVertex2f(-95,-15);
    glVertex2f(-92.5,-10);
    glVertex2f(-95,-7.5);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-95,-15);
    glVertex2f(-87.5,-15);
    glVertex2f(-86.5,-10);
    glVertex2f(-92.5,-10);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-87.5,-15);
    glVertex2f(-85,-12.5);
    glVertex2f(-85,-7.5);
    glVertex2f(-86.5,-10);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-85,-15);
    glVertex2f(-80,-15);
    glVertex2f(-80,0);
    glVertex2f(-85,0);
    glEnd();
//A__________________________________________
    glColor3ub(231, 76, 60);
    glBegin(GL_POLYGON);
    glVertex2f(-57.5,-5);
    glVertex2f(-57.5,7.5);
    glVertex2f(-62.5,15);
    glVertex2f(-72.5,15);
    glVertex2f(-77.5,5);
    glVertex2f(-77.5,-5);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-62.5,0);
    glVertex2f(-62.5,5);
    glVertex2f(-65,10);
    glVertex2f(-70,10);
    glVertex2f(-72.5,5);
    glVertex2f(-72.5,0);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-77.5,-5);
    glVertex2f(-72.5,-5);
    glVertex2f(-72.5,-15);
    glVertex2f(-77.5,-15);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-62.5,-5);
    glVertex2f(-57.5,-5);
    glVertex2f(-57.5,-15);
    glVertex2f(-62.5,-15);
    glEnd();
//M______________________________________
    glColor3ub(231, 76, 60);
    glBegin(GL_POLYGON);
    glVertex2f(-50,5);
    glVertex2f(-46.5,7.5);
    glVertex2f(-50,15);
    glVertex2f(-55,15);
    glVertex2f(-55,5);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_POLYGON);
    glVertex2f(-42.5,0);
    glVertex2f(-40,5);
    glVertex2f(-43.5,7.5);
    glVertex2f(-46.5,7.5);
    glVertex2f(-50,5);
    glVertex2f(-47.5,0);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_POLYGON);
    glVertex2f(-35,5);
    glVertex2f(-35,15);
    glVertex2f(-40,15);
    glVertex2f(-43.5,7.5);
    glVertex2f(-40,5);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-55,-15);
    glVertex2f(-50,-15);
    glVertex2f(-50,5);
    glVertex2f(-55,5);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-40,-15);
    glVertex2f(-35,-15);
    glVertex2f(-35,5);
    glVertex2f(-40,5);
    glEnd();
//E_______________________________________________
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-30,-15);
    glVertex2f(-25,-15);
    glVertex2f(-25,15);
    glVertex2f(-30,15);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-25,10);
    glVertex2f(-10,10);
    glVertex2f(-10,15);
    glVertex2f(-25,15);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-25,-2.5);
    glVertex2f(-17.5,-2.5);
    glVertex2f(-17.5,2.5);
    glVertex2f(-25,2.5);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-25,-15);
    glVertex2f(-10,-15);
    glVertex2f(-10,-10);
    glVertex2f(-25,-10);
    glEnd();
//O________________________________________
    glColor3ub(231, 76, 60);
    glBegin(GL_POLYGON);
    glVertex2f(25,-15);
    glVertex2f(30,-5);
    glVertex2f(30,5);
    glVertex2f(25,15);
    glVertex2f(15,15);
    glVertex2f(10,5);
    glVertex2f(10,-5);
    glVertex2f(15,-15);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(22.5,-10);
    glVertex2f(25,-5);
    glVertex2f(25,5);
    glVertex2f(22.5,10);
    glVertex2f(17.5,10);
    glVertex2f(15,5);
    glVertex2f(15,-5);
    glVertex2f(17.5,-10);
    glEnd();
//V______________________________________________
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(40,-15);
    glVertex2f(50,-15);
    glVertex2f(55,15);
    glVertex2f(35,15);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(40,15);
    glVertex2f(50,15);
    glVertex2f(45,-10);
    glEnd();
//E________________________________________________
    glTranslatef(90,0,0);
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-30,-15);
    glVertex2f(-25,-15);
    glVertex2f(-25,15);
    glVertex2f(-30,15);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-25,10);
    glVertex2f(-10,10);
    glVertex2f(-10,15);
    glVertex2f(-25,15);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-25,-2.5);
    glVertex2f(-17.5,-2.5);
    glVertex2f(-17.5,2.5);
    glVertex2f(-25,2.5);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(-25,-15);
    glVertex2f(-10,-15);
    glVertex2f(-10,-10);
    glVertex2f(-25,-10);
    glEnd();
    glLoadIdentity();
    gluOrtho2D(-120,120,-90,90);
//R_________________________________________________
    glColor3ub(231, 76, 60);
    glBegin(GL_POLYGON);
    glVertex2f(100,-5);
    glVertex2f(105,0);
    glVertex2f(105,10);
    glVertex2f(100,15);
    glVertex2f(85,15);
    glVertex2f(85,-5);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(97.5,0);
    glVertex2f(100,2.5);
    glVertex2f(100,7.5);
    glVertex2f(97.5,10);
    glVertex2f(90,10);
    glVertex2f(90,0);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(85,-15);
    glVertex2f(90,-15);
    glVertex2f(90,-5);
    glVertex2f(85,-5);
    glEnd();
    glColor3ub(231, 76, 60);
    glBegin(GL_QUADS);
    glVertex2f(100,-15);
    glVertex2f(105,-15);
    glVertex2f(100,-5);
    glVertex2f(95,-5);
    glEnd();
}

#endif // SCORE_H
