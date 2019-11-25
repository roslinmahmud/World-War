#ifndef SCENE_H
#define SCENE_H

void filledCircle(GLfloat x, GLfloat y, GLfloat radius)
{
    GLfloat tpi=2*3.1416;
    int sides=100;
    glBegin(GL_POLYGON);
    for(int i=0;i<=sides;i++)
    {
        glVertex2f(
                   x+(radius*cos(i*(tpi/sides))),
                   y+(radius*sin(i*(tpi/sides)))
                   );
    }
    glEnd();
}

double angle=120;




void type1House1(){
    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);

    glScalef(1.1, 1.1, 0);
    glTranslatef(-99, 17, 0);

//1_________________
    glColor3ub(255, 184, 77);
    glBegin(GL_POLYGON);
    glVertex2f(-2,-1);
    glVertex2f(3,-1);
    glVertex2f(3,9.8);
    glVertex2f(.5,13);
    glVertex2f(-2,9.8);
    glEnd();
    //ROOFTOP-1
    glColor3ub(112,112,112);
    glBegin(GL_QUADS);
    glVertex2f(-2.5,9.8);
    glVertex2f(-2,9.8);
    glVertex2f(.5,13);
    glVertex2f(.5,13.5);
    glEnd();
    //ROOFTOP-2
    glColor3ub(112,112,112);
    glBegin(GL_QUADS);
    glVertex2f(.5,13);
    glVertex2f(3,9.8);
    glVertex2f(3.5,9.8);
    glVertex2f(.5,13.5);
    glEnd();

//2____________________
    glColor3ub(255, 184, 77);
    glBegin(GL_QUADS);
    glVertex2f(3,-1);
    glVertex2f(9,-1);
    glVertex2f(9,4);
    glVertex2f(3,4);
    glEnd();
//3__________________
    glColor3ub(112,112,112);
    glBegin(GL_QUADS);
    glVertex2f(3,4);
    glVertex2f(9.5,4);
    glVertex2f(8,6.5);
    glVertex2f(3,6.5);
    glEnd();
//4___________________
    glColor3ub(112,112,112);
    glBegin(GL_QUADS);
    glVertex2f(-3,3);
    glVertex2f(3.5,3);
    glVertex2f(2.5,5);
    glVertex2f(-2,5);
    glEnd();
//RAILING-1_____________
    glColor3ub(255, 117, 26);
    glBegin(GL_QUADS);
    glVertex2f(-2.5,-1);
    glVertex2f(-2.2,-1);
    glVertex2f(-2.2,3);
    glVertex2f(-2.5,3);
    glEnd();
//RAILING-2
    glColor3ub(255, 117, 26);
    glBegin(GL_QUADS);
    glVertex2f(0,-1);
    glVertex2f(.3,-1);
    glVertex2f(.3,3);
    glVertex2f(0,3);
    glEnd();
//RAILING-4
    glColor3ub(255, 117, 26);
    glBegin(GL_QUADS);
    glVertex2f(-2.5,1);
    glVertex2f(0,1);
    glVertex2f(0,1.3);
    glVertex2f(-2.5,1.3);
    glEnd();
//RAILING-5
    glColor3ub(255, 117, 26);
    glBegin(GL_QUADS);
    glVertex2f(2.7,-1);
    glVertex2f(3,-1);
    glVertex2f(3,3);
    glVertex2f(2.7,3);
    glEnd();
    glColor3ub(255, 117, 26);
    glBegin(GL_LINES);
    glVertex2f(-2,1);
    glVertex2f(-2,-1);
    glEnd();

    glColor3ub(255, 117, 26);
    glBegin(GL_LINES);
    glVertex2f(-1.5,1);
    glVertex2f(-1.5,-1);
    glEnd();

    glColor3ub(255, 117, 26);
    glBegin(GL_LINES);
    glVertex2f(-1,-1);
    glVertex2f(-1,1);
    glEnd();

    glColor3ub(255, 117, 26);
    glBegin(GL_LINES);
    glVertex2f(-.5,1);
    glVertex2f(-.5,-1);
    glEnd();
//WIN-1
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(0,10);
    glVertex2f(1,10);
    glVertex2f(1,11);
    glVertex2f(0,11);
    glEnd();
    glColor3ub(102, 153, 153);
    glBegin(GL_QUADS);
    glVertex2f(.1,10.1);
    glVertex2f(.9,10.1);
    glVertex2f(.9,10.9);
    glVertex2f(.1,10.9);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(1,10.5);
    glVertex2f(0,10.5);
    glEnd();
//WIN-2
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(-.5,7);
    glVertex2f(1.5,7);
    glVertex2f(1.5,9);
    glVertex2f(-.5,9);
    glEnd();
    glColor3ub(102, 153, 153);
    glBegin(GL_QUADS);
    glVertex2f(-.3,7.2);
    glVertex2f(1.3,7.2);
    glVertex2f(1.3,8.8);
    glVertex2f(-.3,8.8);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(-.5,8);
    glVertex2f(1.5,8);
    glEnd();
//WIN-3
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(-1.5,1.5);
    glVertex2f(-.5,1.5);
    glVertex2f(-.5,2.8);
    glVertex2f(-1.5,2.8);
    glEnd();
    glColor3ub(102, 153, 153);
    glBegin(GL_QUADS);
    glVertex2f(-1.4,1.6);
    glVertex2f(-.6,1.6);
    glVertex2f(-.6,2.7);
    glVertex2f(-1.4,2.7);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(-1.5,2.15);
    glVertex2f(-.5,2.15);
    glEnd();
//WIN-4
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(4,0);
    glVertex2f(8,0);
    glVertex2f(8,3);
    glVertex2f(4,3);
    glEnd();
    glColor3ub(102, 153, 153);
    glBegin(GL_QUADS);
    glVertex2f(4.2,.2);
    glVertex2f(7.8,.2);
    glVertex2f(7.8,2.8);
    glVertex2f(4.2,2.8);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(4,1.5);
    glVertex2f(8,1.5);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(6,0);
    glVertex2f(6,3);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(5,0);
    glVertex2f(5,3);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(7,0);
    glVertex2f(7,3);
    glEnd();
//DOOR
    glColor3ub(255, 236, 179);
    glBegin(GL_QUADS);
    glVertex2f(.5,-1);
    glVertex2f(2.3,-1);
    glVertex2f(2.3,2.5);
    glVertex2f(.5,2.5);
    glEnd();
    glColor3ub(61, 92, 92);
    glBegin(GL_QUADS);
    glVertex2f(.7,-1);
    glVertex2f(2.1,-1);
    glVertex2f(2.1,2.3);
    glVertex2f(.7,2.3);
    glEnd();

    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);
}

void type1House2(){
    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);

    glScalef(1.1, 1.1, 0);
    glTranslatef(-103, 0, 0);

//1_________________
    glColor3ub(255, 184, 77);
    glBegin(GL_POLYGON);
    glVertex2f(-2,-1);
    glVertex2f(3,-1);
    glVertex2f(3,9.8);
    glVertex2f(.5,13);
    glVertex2f(-2,9.8);
    glEnd();
    //ROOFTOP-1
    glColor3ub(112,112,112);
    glBegin(GL_QUADS);
    glVertex2f(-2.5,9.8);
    glVertex2f(-2,9.8);
    glVertex2f(.5,13);
    glVertex2f(.5,13.5);
    glEnd();
    //ROOFTOP-2
    glColor3ub(112,112,112);
    glBegin(GL_QUADS);
    glVertex2f(.5,13);
    glVertex2f(3,9.8);
    glVertex2f(3.5,9.8);
    glVertex2f(.5,13.5);
    glEnd();

//2____________________
    glColor3ub(255, 184, 77);
    glBegin(GL_QUADS);
    glVertex2f(3,-1);
    glVertex2f(9,-1);
    glVertex2f(9,4);
    glVertex2f(3,4);
    glEnd();
//3__________________
    glColor3ub(112,112,112);
    glBegin(GL_QUADS);
    glVertex2f(3,4);
    glVertex2f(9.5,4);
    glVertex2f(8,6.5);
    glVertex2f(3,6.5);
    glEnd();
//4___________________
    glColor3ub(112,112,112);
    glBegin(GL_QUADS);
    glVertex2f(-3,3);
    glVertex2f(3.5,3);
    glVertex2f(2.5,5);
    glVertex2f(-2,5);
    glEnd();
//RAILING-1_____________
    glColor3ub(255, 117, 26);
    glBegin(GL_QUADS);
    glVertex2f(-2.5,-1);
    glVertex2f(-2.2,-1);
    glVertex2f(-2.2,3);
    glVertex2f(-2.5,3);
    glEnd();
//RAILING-2
    glColor3ub(255, 117, 26);
    glBegin(GL_QUADS);
    glVertex2f(0,-1);
    glVertex2f(.3,-1);
    glVertex2f(.3,3);
    glVertex2f(0,3);
    glEnd();
//RAILING-4
    glColor3ub(255, 117, 26);
    glBegin(GL_QUADS);
    glVertex2f(-2.5,1);
    glVertex2f(0,1);
    glVertex2f(0,1.3);
    glVertex2f(-2.5,1.3);
    glEnd();
//RAILING-5
    glColor3ub(255, 117, 26);
    glBegin(GL_QUADS);
    glVertex2f(2.7,-1);
    glVertex2f(3,-1);
    glVertex2f(3,3);
    glVertex2f(2.7,3);
    glEnd();
    glColor3ub(255, 117, 26);
    glBegin(GL_LINES);
    glVertex2f(-2,1);
    glVertex2f(-2,-1);
    glEnd();

    glColor3ub(255, 117, 26);
    glBegin(GL_LINES);
    glVertex2f(-1.5,1);
    glVertex2f(-1.5,-1);
    glEnd();

    glColor3ub(255, 117, 26);
    glBegin(GL_LINES);
    glVertex2f(-1,-1);
    glVertex2f(-1,1);
    glEnd();

    glColor3ub(255, 117, 26);
    glBegin(GL_LINES);
    glVertex2f(-.5,1);
    glVertex2f(-.5,-1);
    glEnd();
//WIN-1
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(0,10);
    glVertex2f(1,10);
    glVertex2f(1,11);
    glVertex2f(0,11);
    glEnd();
    glColor3ub(102, 153, 153);
    glBegin(GL_QUADS);
    glVertex2f(.1,10.1);
    glVertex2f(.9,10.1);
    glVertex2f(.9,10.9);
    glVertex2f(.1,10.9);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(1,10.5);
    glVertex2f(0,10.5);
    glEnd();
//WIN-2
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(-.5,7);
    glVertex2f(1.5,7);
    glVertex2f(1.5,9);
    glVertex2f(-.5,9);
    glEnd();
    glColor3ub(102, 153, 153);
    glBegin(GL_QUADS);
    glVertex2f(-.3,7.2);
    glVertex2f(1.3,7.2);
    glVertex2f(1.3,8.8);
    glVertex2f(-.3,8.8);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(-.5,8);
    glVertex2f(1.5,8);
    glEnd();
//WIN-3
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(-1.5,1.5);
    glVertex2f(-.5,1.5);
    glVertex2f(-.5,2.8);
    glVertex2f(-1.5,2.8);
    glEnd();
    glColor3ub(102, 153, 153);
    glBegin(GL_QUADS);
    glVertex2f(-1.4,1.6);
    glVertex2f(-.6,1.6);
    glVertex2f(-.6,2.7);
    glVertex2f(-1.4,2.7);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(-1.5,2.15);
    glVertex2f(-.5,2.15);
    glEnd();
//WIN-4
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(4,0);
    glVertex2f(8,0);
    glVertex2f(8,3);
    glVertex2f(4,3);
    glEnd();
    glColor3ub(102, 153, 153);
    glBegin(GL_QUADS);
    glVertex2f(4.2,.2);
    glVertex2f(7.8,.2);
    glVertex2f(7.8,2.8);
    glVertex2f(4.2,2.8);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(4,1.5);
    glVertex2f(8,1.5);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(6,0);
    glVertex2f(6,3);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(5,0);
    glVertex2f(5,3);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(7,0);
    glVertex2f(7,3);
    glEnd();
//DOOR
    glColor3ub(255, 236, 179);
    glBegin(GL_QUADS);
    glVertex2f(.5,-1);
    glVertex2f(2.3,-1);
    glVertex2f(2.3,2.5);
    glVertex2f(.5,2.5);
    glEnd();
    glColor3ub(61, 92, 92);
    glBegin(GL_QUADS);
    glVertex2f(.7,-1);
    glVertex2f(2.1,-1);
    glVertex2f(2.1,2.3);
    glVertex2f(.7,2.3);
    glEnd();

    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);
}

void type1House3(){
    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);

    glScalef(1.1, 1.1, 0);
    glTranslatef(-93, -25, 0);

//1_________________
    glColor3ub(255, 184, 77);
    glBegin(GL_POLYGON);
    glVertex2f(-2,-1);
    glVertex2f(3,-1);
    glVertex2f(3,9.8);
    glVertex2f(.5,13);
    glVertex2f(-2,9.8);
    glEnd();
    //ROOFTOP-1
    glColor3ub(112,112,112);
    glBegin(GL_QUADS);
    glVertex2f(-2.5,9.8);
    glVertex2f(-2,9.8);
    glVertex2f(.5,13);
    glVertex2f(.5,13.5);
    glEnd();
    //ROOFTOP-2
    glColor3ub(112,112,112);
    glBegin(GL_QUADS);
    glVertex2f(.5,13);
    glVertex2f(3,9.8);
    glVertex2f(3.5,9.8);
    glVertex2f(.5,13.5);
    glEnd();

//2____________________
    glColor3ub(255, 184, 77);
    glBegin(GL_QUADS);
    glVertex2f(3,-1);
    glVertex2f(9,-1);
    glVertex2f(9,4);
    glVertex2f(3,4);
    glEnd();
//3__________________
    glColor3ub(112,112,112);
    glBegin(GL_QUADS);
    glVertex2f(3,4);
    glVertex2f(9.5,4);
    glVertex2f(8,6.5);
    glVertex2f(3,6.5);
    glEnd();
//4___________________
    glColor3ub(112,112,112);
    glBegin(GL_QUADS);
    glVertex2f(-3,3);
    glVertex2f(3.5,3);
    glVertex2f(2.5,5);
    glVertex2f(-2,5);
    glEnd();
//RAILING-1_____________
    glColor3ub(255, 117, 26);
    glBegin(GL_QUADS);
    glVertex2f(-2.5,-1);
    glVertex2f(-2.2,-1);
    glVertex2f(-2.2,3);
    glVertex2f(-2.5,3);
    glEnd();
//RAILING-2
    glColor3ub(255, 117, 26);
    glBegin(GL_QUADS);
    glVertex2f(0,-1);
    glVertex2f(.3,-1);
    glVertex2f(.3,3);
    glVertex2f(0,3);
    glEnd();
//RAILING-4
    glColor3ub(255, 117, 26);
    glBegin(GL_QUADS);
    glVertex2f(-2.5,1);
    glVertex2f(0,1);
    glVertex2f(0,1.3);
    glVertex2f(-2.5,1.3);
    glEnd();
//RAILING-5
    glColor3ub(255, 117, 26);
    glBegin(GL_QUADS);
    glVertex2f(2.7,-1);
    glVertex2f(3,-1);
    glVertex2f(3,3);
    glVertex2f(2.7,3);
    glEnd();
    glColor3ub(255, 117, 26);
    glBegin(GL_LINES);
    glVertex2f(-2,1);
    glVertex2f(-2,-1);
    glEnd();

    glColor3ub(255, 117, 26);
    glBegin(GL_LINES);
    glVertex2f(-1.5,1);
    glVertex2f(-1.5,-1);
    glEnd();

    glColor3ub(255, 117, 26);
    glBegin(GL_LINES);
    glVertex2f(-1,-1);
    glVertex2f(-1,1);
    glEnd();

    glColor3ub(255, 117, 26);
    glBegin(GL_LINES);
    glVertex2f(-.5,1);
    glVertex2f(-.5,-1);
    glEnd();
//WIN-1
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(0,10);
    glVertex2f(1,10);
    glVertex2f(1,11);
    glVertex2f(0,11);
    glEnd();
    glColor3ub(102, 153, 153);
    glBegin(GL_QUADS);
    glVertex2f(.1,10.1);
    glVertex2f(.9,10.1);
    glVertex2f(.9,10.9);
    glVertex2f(.1,10.9);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(1,10.5);
    glVertex2f(0,10.5);
    glEnd();
//WIN-2
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(-.5,7);
    glVertex2f(1.5,7);
    glVertex2f(1.5,9);
    glVertex2f(-.5,9);
    glEnd();
    glColor3ub(102, 153, 153);
    glBegin(GL_QUADS);
    glVertex2f(-.3,7.2);
    glVertex2f(1.3,7.2);
    glVertex2f(1.3,8.8);
    glVertex2f(-.3,8.8);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(-.5,8);
    glVertex2f(1.5,8);
    glEnd();
//WIN-3
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(-1.5,1.5);
    glVertex2f(-.5,1.5);
    glVertex2f(-.5,2.8);
    glVertex2f(-1.5,2.8);
    glEnd();
    glColor3ub(102, 153, 153);
    glBegin(GL_QUADS);
    glVertex2f(-1.4,1.6);
    glVertex2f(-.6,1.6);
    glVertex2f(-.6,2.7);
    glVertex2f(-1.4,2.7);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(-1.5,2.15);
    glVertex2f(-.5,2.15);
    glEnd();
//WIN-4
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(4,0);
    glVertex2f(8,0);
    glVertex2f(8,3);
    glVertex2f(4,3);
    glEnd();
    glColor3ub(102, 153, 153);
    glBegin(GL_QUADS);
    glVertex2f(4.2,.2);
    glVertex2f(7.8,.2);
    glVertex2f(7.8,2.8);
    glVertex2f(4.2,2.8);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(4,1.5);
    glVertex2f(8,1.5);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(6,0);
    glVertex2f(6,3);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(5,0);
    glVertex2f(5,3);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(7,0);
    glVertex2f(7,3);
    glEnd();
//DOOR
    glColor3ub(255, 236, 179);
    glBegin(GL_QUADS);
    glVertex2f(.5,-1);
    glVertex2f(2.3,-1);
    glVertex2f(2.3,2.5);
    glVertex2f(.5,2.5);
    glEnd();
    glColor3ub(61, 92, 92);
    glBegin(GL_QUADS);
    glVertex2f(.7,-1);
    glVertex2f(2.1,-1);
    glVertex2f(2.1,2.3);
    glVertex2f(.7,2.3);
    glEnd();

    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);
}


void type2House1(){
    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);

    glScalef(1.3, 0.8, 0);
    glTranslatef(-30, 15, 0);
    //1___________________
    glColor3ub(112,112,112);
    glBegin(GL_QUADS);
    glVertex2f(-1,10);
    glVertex2f(4.7,10);
    glVertex2f(3,13);
    glVertex2f(-3,13);
    glEnd();
//chimney____________________
    glColor3ub(25, 51, 77);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2,14.2);
    glVertex2f(-.8,14.15);
    glVertex2f(-1,15);
    glEnd();

    glColor3ub(112,112,112);
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,14.15);
    glVertex2f(0,14.3);
    glVertex2f(-1,15);
    glEnd();

    glColor3ub(223, 207, 159);
    glBegin(GL_QUADS);
    glVertex2f(-.8,12.3);
    glVertex2f(0,12.3);
    glVertex2f(0,14.3);
    glVertex2f(-.8,14.15);
    glEnd();

    glColor3ub(198, 169, 83);
    glBegin(GL_POLYGON);
    glVertex2f(-2,14.2);
    glVertex2f(-.8,14.15);
    glVertex2f(-.8,12.3);
    glVertex2f(-1.3,13);
    glVertex2f(-2,13);
    glEnd();

//chimney-2____________________
    glColor3ub(25, 51, 77);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2,14.2);
    glVertex2f(-.8,14.15);
    glVertex2f(-1,15);
    glEnd();

    glColor3ub(112,112,112);
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,14.15);
    glVertex2f(0,14.3);
    glVertex2f(-1,15);
    glEnd();

    glColor3ub(223, 207, 159);
    glBegin(GL_QUADS);
    glVertex2f(-.8,12.3);
    glVertex2f(0,12.3);
    glVertex2f(0,14.3);
    glVertex2f(-.8,14.15);
    glEnd();

    glColor3ub(198, 169, 83);
    glBegin(GL_POLYGON);
    glVertex2f(-2,14.2);
    glVertex2f(-.8,14.15);
    glVertex2f(-.8,12.3);
    glVertex2f(-1.3,13);
    glVertex2f(-2,13);
    glEnd();

//2___________________
    glColor3ub(198, 169, 83);
    glBegin(GL_POLYGON);
    glVertex2f(-5,0);
    glVertex2f(-1,0);
    glVertex2f(-1,10);
    glVertex2f(-3,13);
    glVertex2f(-5,10);
    glEnd();
//3_____________________
    glColor3ub(223, 207, 159);
    glBegin(GL_QUADS);
    glVertex2f(-1,0);
    glVertex2f(4.5,0);
    glVertex2f(4.5,10);
    glVertex2f(-1,10);
    glEnd();
//window-1___________________
    glColor3ub(128, 43, 0);
    glBegin(GL_QUADS);
    glVertex2f(-4,7);
    glVertex2f(-2,7);
    glVertex2f(-2,9);
    glVertex2f(-4,9);
    glEnd();
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(-3.8,7.2);
    glVertex2f(-2.2,7.2);
    glVertex2f(-2.2,8.8);
    glVertex2f(-3.8,8.8);
    glEnd();
    glColor3ub(128, 43, 0);
    glBegin(GL_LINES);
    glVertex2f(-4,8);
    glVertex2f(-2,8);
    glEnd();
    glColor3ub(128, 43, 0);
    glBegin(GL_LINES);
    glVertex2f(-3,9);
    glVertex2f(-3,7);
    glEnd();
//window-2_________________
    glColor3ub(204, 68, 0);
    glBegin(GL_QUADS);
    glVertex2f(-4,7);
    glVertex2f(-2,7);
    glVertex2f(-2,9);
    glVertex2f(-4,9);
    glEnd();
    glColor3ub(64, 128, 191);
    glBegin(GL_QUADS);
    glVertex2f(-3.8,7.2);
    glVertex2f(-2.2,7.2);
    glVertex2f(-2.2,8.8);
    glVertex2f(-3.8,8.8);
    glEnd();
    glColor3ub(204, 68, 0);
    glBegin(GL_LINES);
    glVertex2f(-4,8);
    glVertex2f(-2,8);
    glEnd();
    glColor3ub(204, 68, 0);
    glBegin(GL_LINES);
    glVertex2f(-3,9);
    glVertex2f(-3,7);
    glEnd();

//win-3_________________________________________
    glColor3ub(204, 68, 0);
    glBegin(GL_QUADS);
    glVertex2f(-.5,5);
    glVertex2f(4,5);
    glVertex2f(4,1.5);
    glVertex2f(-.5,1.5);
    glEnd();
    glColor3ub(64, 128, 191);
    glBegin(GL_QUADS);
    glVertex2f(-.3,4.8);
    glVertex2f(3.8,4.8);
    glVertex2f(3.8,1.7);
    glVertex2f(-.3,1.7);
    glEnd();
    glColor3ub(204, 68, 0);
    glBegin(GL_LINES);
    glVertex2f(1.8,4.8);
    glVertex2f(1.8,1.7);
    glEnd();
    glColor3ub(204, 68, 0);
    glBegin(GL_LINES);
    glVertex2f(-.3,3.25);
    glVertex2f(3.8,3.25);
    glEnd();

    glColor3ub(204, 68, 0);
    glBegin(GL_LINES);
    glVertex2f(.75,4.8);
    glVertex2f(.75,1.7);
    glEnd();

    glColor3ub(204, 68, 0);
    glBegin(GL_LINES);
    glVertex2f(2.85,4.8);
    glVertex2f(2.85,1.7);
    glEnd();
//door________________________________
    glColor3ub(128, 43, 0);
    glBegin(GL_QUADS);
    glVertex2f(-4,5);
    glVertex2f(-2,5);
    glVertex2f(-2,0);
    glVertex2f(-4,0);
    glEnd();
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(-3.8,4.8);
    glVertex2f(-2.2,4.8);
    glVertex2f(-2.2,2.8);
    glVertex2f(-3.8,2.8);
    glEnd();

    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);
}

void type2House2(){
    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);

    glScalef(1.3, 0.8, 0);
    glTranslatef(-50, -10, 0);
    //1___________________
    glColor3ub(112,112,112);
    glBegin(GL_QUADS);
    glVertex2f(-1,10);
    glVertex2f(4.7,10);
    glVertex2f(3,13);
    glVertex2f(-3,13);
    glEnd();
//chimney____________________
    glColor3ub(25, 51, 77);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2,14.2);
    glVertex2f(-.8,14.15);
    glVertex2f(-1,15);
    glEnd();

    glColor3ub(112,112,112);
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,14.15);
    glVertex2f(0,14.3);
    glVertex2f(-1,15);
    glEnd();

    glColor3ub(223, 207, 159);
    glBegin(GL_QUADS);
    glVertex2f(-.8,12.3);
    glVertex2f(0,12.3);
    glVertex2f(0,14.3);
    glVertex2f(-.8,14.15);
    glEnd();

    glColor3ub(198, 169, 83);
    glBegin(GL_POLYGON);
    glVertex2f(-2,14.2);
    glVertex2f(-.8,14.15);
    glVertex2f(-.8,12.3);
    glVertex2f(-1.3,13);
    glVertex2f(-2,13);
    glEnd();

//chimney-2____________________
    glColor3ub(25, 51, 77);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2,14.2);
    glVertex2f(-.8,14.15);
    glVertex2f(-1,15);
    glEnd();

    glColor3ub(112,112,112);
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,14.15);
    glVertex2f(0,14.3);
    glVertex2f(-1,15);
    glEnd();

    glColor3ub(223, 207, 159);
    glBegin(GL_QUADS);
    glVertex2f(-.8,12.3);
    glVertex2f(0,12.3);
    glVertex2f(0,14.3);
    glVertex2f(-.8,14.15);
    glEnd();

    glColor3ub(198, 169, 83);
    glBegin(GL_POLYGON);
    glVertex2f(-2,14.2);
    glVertex2f(-.8,14.15);
    glVertex2f(-.8,12.3);
    glVertex2f(-1.3,13);
    glVertex2f(-2,13);
    glEnd();

//2___________________
    glColor3ub(198, 169, 83);
    glBegin(GL_POLYGON);
    glVertex2f(-5,0);
    glVertex2f(-1,0);
    glVertex2f(-1,10);
    glVertex2f(-3,13);
    glVertex2f(-5,10);
    glEnd();
//3_____________________
    glColor3ub(223, 207, 159);
    glBegin(GL_QUADS);
    glVertex2f(-1,0);
    glVertex2f(4.5,0);
    glVertex2f(4.5,10);
    glVertex2f(-1,10);
    glEnd();
//window-1___________________
    glColor3ub(128, 43, 0);
    glBegin(GL_QUADS);
    glVertex2f(-4,7);
    glVertex2f(-2,7);
    glVertex2f(-2,9);
    glVertex2f(-4,9);
    glEnd();
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(-3.8,7.2);
    glVertex2f(-2.2,7.2);
    glVertex2f(-2.2,8.8);
    glVertex2f(-3.8,8.8);
    glEnd();
    glColor3ub(128, 43, 0);
    glBegin(GL_LINES);
    glVertex2f(-4,8);
    glVertex2f(-2,8);
    glEnd();
    glColor3ub(128, 43, 0);
    glBegin(GL_LINES);
    glVertex2f(-3,9);
    glVertex2f(-3,7);
    glEnd();
//window-2_________________
    glColor3ub(204, 68, 0);
    glBegin(GL_QUADS);
    glVertex2f(-4,7);
    glVertex2f(-2,7);
    glVertex2f(-2,9);
    glVertex2f(-4,9);
    glEnd();
    glColor3ub(64, 128, 191);
    glBegin(GL_QUADS);
    glVertex2f(-3.8,7.2);
    glVertex2f(-2.2,7.2);
    glVertex2f(-2.2,8.8);
    glVertex2f(-3.8,8.8);
    glEnd();
    glColor3ub(204, 68, 0);
    glBegin(GL_LINES);
    glVertex2f(-4,8);
    glVertex2f(-2,8);
    glEnd();
    glColor3ub(204, 68, 0);
    glBegin(GL_LINES);
    glVertex2f(-3,9);
    glVertex2f(-3,7);
    glEnd();

//win-3_________________________________________
    glColor3ub(204, 68, 0);
    glBegin(GL_QUADS);
    glVertex2f(-.5,5);
    glVertex2f(4,5);
    glVertex2f(4,1.5);
    glVertex2f(-.5,1.5);
    glEnd();
    glColor3ub(64, 128, 191);
    glBegin(GL_QUADS);
    glVertex2f(-.3,4.8);
    glVertex2f(3.8,4.8);
    glVertex2f(3.8,1.7);
    glVertex2f(-.3,1.7);
    glEnd();
    glColor3ub(204, 68, 0);
    glBegin(GL_LINES);
    glVertex2f(1.8,4.8);
    glVertex2f(1.8,1.7);
    glEnd();
    glColor3ub(204, 68, 0);
    glBegin(GL_LINES);
    glVertex2f(-.3,3.25);
    glVertex2f(3.8,3.25);
    glEnd();

    glColor3ub(204, 68, 0);
    glBegin(GL_LINES);
    glVertex2f(.75,4.8);
    glVertex2f(.75,1.7);
    glEnd();

    glColor3ub(204, 68, 0);
    glBegin(GL_LINES);
    glVertex2f(2.85,4.8);
    glVertex2f(2.85,1.7);
    glEnd();
//door________________________________
    glColor3ub(128, 43, 0);
    glBegin(GL_QUADS);
    glVertex2f(-4,5);
    glVertex2f(-2,5);
    glVertex2f(-2,0);
    glVertex2f(-4,0);
    glEnd();
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(-3.8,4.8);
    glVertex2f(-2.2,4.8);
    glVertex2f(-2.2,2.8);
    glVertex2f(-3.8,2.8);
    glEnd();

    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);
}


void type2House3(){
    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);

    glScalef(1.3, 0.8, 0);
    glTranslatef(0, -25, 0);
    //1___________________
    glColor3ub(112,112,112);
    glBegin(GL_QUADS);
    glVertex2f(-1,10);
    glVertex2f(4.7,10);
    glVertex2f(3,13);
    glVertex2f(-3,13);
    glEnd();
//chimney____________________
    glColor3ub(25, 51, 77);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2,14.2);
    glVertex2f(-.8,14.15);
    glVertex2f(-1,15);
    glEnd();

    glColor3ub(112,112,112);
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,14.15);
    glVertex2f(0,14.3);
    glVertex2f(-1,15);
    glEnd();

    glColor3ub(223, 207, 159);
    glBegin(GL_QUADS);
    glVertex2f(-.8,12.3);
    glVertex2f(0,12.3);
    glVertex2f(0,14.3);
    glVertex2f(-.8,14.15);
    glEnd();

    glColor3ub(198, 169, 83);
    glBegin(GL_POLYGON);
    glVertex2f(-2,14.2);
    glVertex2f(-.8,14.15);
    glVertex2f(-.8,12.3);
    glVertex2f(-1.3,13);
    glVertex2f(-2,13);
    glEnd();

//chimney-2____________________
    glColor3ub(25, 51, 77);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2,14.2);
    glVertex2f(-.8,14.15);
    glVertex2f(-1,15);
    glEnd();

    glColor3ub(112,112,112);
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,14.15);
    glVertex2f(0,14.3);
    glVertex2f(-1,15);
    glEnd();

    glColor3ub(223, 207, 159);
    glBegin(GL_QUADS);
    glVertex2f(-.8,12.3);
    glVertex2f(0,12.3);
    glVertex2f(0,14.3);
    glVertex2f(-.8,14.15);
    glEnd();

    glColor3ub(198, 169, 83);
    glBegin(GL_POLYGON);
    glVertex2f(-2,14.2);
    glVertex2f(-.8,14.15);
    glVertex2f(-.8,12.3);
    glVertex2f(-1.3,13);
    glVertex2f(-2,13);
    glEnd();

//2___________________
    glColor3ub(198, 169, 83);
    glBegin(GL_POLYGON);
    glVertex2f(-5,0);
    glVertex2f(-1,0);
    glVertex2f(-1,10);
    glVertex2f(-3,13);
    glVertex2f(-5,10);
    glEnd();
//3_____________________
    glColor3ub(223, 207, 159);
    glBegin(GL_QUADS);
    glVertex2f(-1,0);
    glVertex2f(4.5,0);
    glVertex2f(4.5,10);
    glVertex2f(-1,10);
    glEnd();
//window-1___________________
    glColor3ub(128, 43, 0);
    glBegin(GL_QUADS);
    glVertex2f(-4,7);
    glVertex2f(-2,7);
    glVertex2f(-2,9);
    glVertex2f(-4,9);
    glEnd();
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(-3.8,7.2);
    glVertex2f(-2.2,7.2);
    glVertex2f(-2.2,8.8);
    glVertex2f(-3.8,8.8);
    glEnd();
    glColor3ub(128, 43, 0);
    glBegin(GL_LINES);
    glVertex2f(-4,8);
    glVertex2f(-2,8);
    glEnd();
    glColor3ub(128, 43, 0);
    glBegin(GL_LINES);
    glVertex2f(-3,9);
    glVertex2f(-3,7);
    glEnd();
//window-2_________________
    glColor3ub(204, 68, 0);
    glBegin(GL_QUADS);
    glVertex2f(-4,7);
    glVertex2f(-2,7);
    glVertex2f(-2,9);
    glVertex2f(-4,9);
    glEnd();
    glColor3ub(64, 128, 191);
    glBegin(GL_QUADS);
    glVertex2f(-3.8,7.2);
    glVertex2f(-2.2,7.2);
    glVertex2f(-2.2,8.8);
    glVertex2f(-3.8,8.8);
    glEnd();
    glColor3ub(204, 68, 0);
    glBegin(GL_LINES);
    glVertex2f(-4,8);
    glVertex2f(-2,8);
    glEnd();
    glColor3ub(204, 68, 0);
    glBegin(GL_LINES);
    glVertex2f(-3,9);
    glVertex2f(-3,7);
    glEnd();

//win-3_________________________________________
    glColor3ub(204, 68, 0);
    glBegin(GL_QUADS);
    glVertex2f(-.5,5);
    glVertex2f(4,5);
    glVertex2f(4,1.5);
    glVertex2f(-.5,1.5);
    glEnd();
    glColor3ub(64, 128, 191);
    glBegin(GL_QUADS);
    glVertex2f(-.3,4.8);
    glVertex2f(3.8,4.8);
    glVertex2f(3.8,1.7);
    glVertex2f(-.3,1.7);
    glEnd();
    glColor3ub(204, 68, 0);
    glBegin(GL_LINES);
    glVertex2f(1.8,4.8);
    glVertex2f(1.8,1.7);
    glEnd();
    glColor3ub(204, 68, 0);
    glBegin(GL_LINES);
    glVertex2f(-.3,3.25);
    glVertex2f(3.8,3.25);
    glEnd();

    glColor3ub(204, 68, 0);
    glBegin(GL_LINES);
    glVertex2f(.75,4.8);
    glVertex2f(.75,1.7);
    glEnd();

    glColor3ub(204, 68, 0);
    glBegin(GL_LINES);
    glVertex2f(2.85,4.8);
    glVertex2f(2.85,1.7);
    glEnd();
//door________________________________
    glColor3ub(128, 43, 0);
    glBegin(GL_QUADS);
    glVertex2f(-4,5);
    glVertex2f(-2,5);
    glVertex2f(-2,0);
    glVertex2f(-4,0);
    glEnd();
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(-3.8,4.8);
    glVertex2f(-2.2,4.8);
    glVertex2f(-2.2,2.8);
    glVertex2f(-3.8,2.8);
    glEnd();

    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);
}


void factory1(){
    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);

    glScalef(1.9, 1.9, 0);
    glTranslatef(25, -15, 0);

//1____________
    glColor3ub(133, 173, 173);
    glBegin(GL_QUADS);
    glVertex2f(-3,0);
    glVertex2f(0,0);
    glVertex2f(0,6);
    glVertex2f(-3,6);
    glEnd();
//2_____________
    glColor3ub(179, 204, 204);
    glBegin(GL_QUADS);
    glVertex2f(0,0);
    glVertex2f(4,0);
    glVertex2f(4,4.5);
    glVertex2f(0,6);
    glEnd();
//3______________
    glColor3ub(148, 184, 184);
    glBegin(GL_QUADS);
    glVertex2f(4,0);
    glVertex2f(6.6,0);
    glVertex2f(6.6,2);
    glVertex2f(4,3);
    glEnd();

//4______________
    glColor3ub(92, 138, 138);
    glBegin(GL_QUADS);
    glVertex2f(-.4,0);
    glVertex2f(0,0);
    glVertex2f(0,6);
    glVertex2f(-.4,6);
    glEnd();
//5______________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(-2.8,0);
    glVertex2f(0,0);
    glVertex2f(0,2);
    glVertex2f(-2.8,2);
    glEnd();
//6_____1____________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(-2.5,4.5);
    glVertex2f(-.9,4.5);
    glVertex2f(-.9,5.5);
    glVertex2f(-2.5,5.5);
    glEnd();
//6______2___________
    glColor3ub(100, 153, 206);
    glBegin(GL_QUADS);
    glVertex2f(-2.4,4.6);
    glVertex2f(-1,4.6);
    glVertex2f(-1,5.4);
    glVertex2f(-2.4,5.4);
    glEnd();
//6______3___________
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(-2.4,5.4);
    glVertex2f(-1,5.4);
    glVertex2f(-1,4.6);
    glVertex2f(-1.1,5.3);
    glEnd();
//7______1___________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(-2.5,2.5);
    glVertex2f(-.9,2.5);
    glVertex2f(-.9,3.5);
    glVertex2f(-2.5,3.5);
    glEnd();
//7_______2__________
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(-2.4,2.6);
    glVertex2f(-1,2.6);
    glVertex2f(-1,3.4);
    glVertex2f(-2.4,3.4);
    glEnd();
//7______3___________
//8_______1__________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(.5,4);
    glVertex2f(3.5,4);
    glVertex2f(3.5,2.5);
    glVertex2f(.5,2.5);
    glEnd();
//8___________2__________
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(.6,3.9);
    glVertex2f(3.4,3.9);
    glVertex2f(3.4,2.6);
    glVertex2f(.6,2.6);
    glEnd();
//8______3___________
//9___________1__________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(1.2,0);
    glVertex2f(2.8,0);
    glVertex2f(2.8,2);
    glVertex2f(1.2,2);
    glEnd();
//9___________2__________
    glColor3ub(105,105,105);
    glBegin(GL_QUADS);
    glVertex2f(1.3,0);
    glVertex2f(2.7,0);
    glVertex2f(2.7,1.9);
    glVertex2f(1.3,1.9);
    glEnd();
//9______3___________

//10__________1___________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(4.3,1.5);
    glVertex2f(6.2,1.5);
    glVertex2f(6.2,1.8);
    glVertex2f(4.3,2.5);
    glEnd();
//10___________2___________
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(4.4,1.6);
    glVertex2f(6.1,1.6);
    glVertex2f(6.1,1.75);
    glVertex2f(4.4,2.35);
    glEnd();
//10______3___________
//11__________!___________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(4.8,0);
    glVertex2f(5.8,0);
    glVertex2f(5.8,1.2);
    glVertex2f(4.8,1.2);
    glEnd();
//11_________2_____________
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(4.9,0);
    glVertex2f(5.7,0);
    glVertex2f(5.7,1.1);
    glVertex2f(4.9,1.1);
    glEnd();
//11______3___________

    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);
}


void factory2(){
    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);

    glScalef(1.9, 1.9, 0);
    glTranslatef(50, -13, 0);

//1____________
    glColor3ub(133, 173, 173);
    glBegin(GL_QUADS);
    glVertex2f(-3,0);
    glVertex2f(0,0);
    glVertex2f(0,6);
    glVertex2f(-3,6);
    glEnd();
//2_____________
    glColor3ub(179, 204, 204);
    glBegin(GL_QUADS);
    glVertex2f(0,0);
    glVertex2f(4,0);
    glVertex2f(4,4.5);
    glVertex2f(0,6);
    glEnd();
//3______________
    glColor3ub(148, 184, 184);
    glBegin(GL_QUADS);
    glVertex2f(4,0);
    glVertex2f(6.6,0);
    glVertex2f(6.6,2);
    glVertex2f(4,3);
    glEnd();

//4______________
    glColor3ub(92, 138, 138);
    glBegin(GL_QUADS);
    glVertex2f(-.4,0);
    glVertex2f(0,0);
    glVertex2f(0,6);
    glVertex2f(-.4,6);
    glEnd();
//5______________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(-2.8,0);
    glVertex2f(0,0);
    glVertex2f(0,2);
    glVertex2f(-2.8,2);
    glEnd();
//6_____1____________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(-2.5,4.5);
    glVertex2f(-.9,4.5);
    glVertex2f(-.9,5.5);
    glVertex2f(-2.5,5.5);
    glEnd();
//6______2___________
    glColor3ub(100, 153, 206);
    glBegin(GL_QUADS);
    glVertex2f(-2.4,4.6);
    glVertex2f(-1,4.6);
    glVertex2f(-1,5.4);
    glVertex2f(-2.4,5.4);
    glEnd();
//6______3___________
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(-2.4,5.4);
    glVertex2f(-1,5.4);
    glVertex2f(-1,4.6);
    glVertex2f(-1.1,5.3);
    glEnd();
//7______1___________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(-2.5,2.5);
    glVertex2f(-.9,2.5);
    glVertex2f(-.9,3.5);
    glVertex2f(-2.5,3.5);
    glEnd();
//7_______2__________
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(-2.4,2.6);
    glVertex2f(-1,2.6);
    glVertex2f(-1,3.4);
    glVertex2f(-2.4,3.4);
    glEnd();
//7______3___________
//8_______1__________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(.5,4);
    glVertex2f(3.5,4);
    glVertex2f(3.5,2.5);
    glVertex2f(.5,2.5);
    glEnd();
//8___________2__________
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(.6,3.9);
    glVertex2f(3.4,3.9);
    glVertex2f(3.4,2.6);
    glVertex2f(.6,2.6);
    glEnd();
//8______3___________
//9___________1__________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(1.2,0);
    glVertex2f(2.8,0);
    glVertex2f(2.8,2);
    glVertex2f(1.2,2);
    glEnd();
//9___________2__________
    glColor3ub(105,105,105);
    glBegin(GL_QUADS);
    glVertex2f(1.3,0);
    glVertex2f(2.7,0);
    glVertex2f(2.7,1.9);
    glVertex2f(1.3,1.9);
    glEnd();
//9______3___________

//10__________1___________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(4.3,1.5);
    glVertex2f(6.2,1.5);
    glVertex2f(6.2,1.8);
    glVertex2f(4.3,2.5);
    glEnd();
//10___________2___________
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(4.4,1.6);
    glVertex2f(6.1,1.6);
    glVertex2f(6.1,1.75);
    glVertex2f(4.4,2.35);
    glEnd();
//10______3___________
//11__________!___________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(4.8,0);
    glVertex2f(5.8,0);
    glVertex2f(5.8,1.2);
    glVertex2f(4.8,1.2);
    glEnd();
//11_________2_____________
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(4.9,0);
    glVertex2f(5.7,0);
    glVertex2f(5.7,1.1);
    glVertex2f(4.9,1.1);
    glEnd();
//11______3___________

    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);
}


void factory3(){
    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);

    glScalef(1.9, 1.9, 0);
    glTranslatef(30, -5, 0);

//1____________
    glColor3ub(133, 173, 173);
    glBegin(GL_QUADS);
    glVertex2f(-3,0);
    glVertex2f(0,0);
    glVertex2f(0,6);
    glVertex2f(-3,6);
    glEnd();
//2_____________
    glColor3ub(179, 204, 204);
    glBegin(GL_QUADS);
    glVertex2f(0,0);
    glVertex2f(4,0);
    glVertex2f(4,4.5);
    glVertex2f(0,6);
    glEnd();
//3______________
    glColor3ub(148, 184, 184);
    glBegin(GL_QUADS);
    glVertex2f(4,0);
    glVertex2f(6.6,0);
    glVertex2f(6.6,2);
    glVertex2f(4,3);
    glEnd();

//4______________
    glColor3ub(92, 138, 138);
    glBegin(GL_QUADS);
    glVertex2f(-.4,0);
    glVertex2f(0,0);
    glVertex2f(0,6);
    glVertex2f(-.4,6);
    glEnd();
//5______________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(-2.8,0);
    glVertex2f(0,0);
    glVertex2f(0,2);
    glVertex2f(-2.8,2);
    glEnd();
//6_____1____________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(-2.5,4.5);
    glVertex2f(-.9,4.5);
    glVertex2f(-.9,5.5);
    glVertex2f(-2.5,5.5);
    glEnd();
//6______2___________
    glColor3ub(100, 153, 206);
    glBegin(GL_QUADS);
    glVertex2f(-2.4,4.6);
    glVertex2f(-1,4.6);
    glVertex2f(-1,5.4);
    glVertex2f(-2.4,5.4);
    glEnd();
//6______3___________
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(-2.4,5.4);
    glVertex2f(-1,5.4);
    glVertex2f(-1,4.6);
    glVertex2f(-1.1,5.3);
    glEnd();
//7______1___________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(-2.5,2.5);
    glVertex2f(-.9,2.5);
    glVertex2f(-.9,3.5);
    glVertex2f(-2.5,3.5);
    glEnd();
//7_______2__________
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(-2.4,2.6);
    glVertex2f(-1,2.6);
    glVertex2f(-1,3.4);
    glVertex2f(-2.4,3.4);
    glEnd();
//7______3___________
//8_______1__________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(.5,4);
    glVertex2f(3.5,4);
    glVertex2f(3.5,2.5);
    glVertex2f(.5,2.5);
    glEnd();
//8___________2__________
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(.6,3.9);
    glVertex2f(3.4,3.9);
    glVertex2f(3.4,2.6);
    glVertex2f(.6,2.6);
    glEnd();
//8______3___________
//9___________1__________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(1.2,0);
    glVertex2f(2.8,0);
    glVertex2f(2.8,2);
    glVertex2f(1.2,2);
    glEnd();
//9___________2__________
    glColor3ub(105,105,105);
    glBegin(GL_QUADS);
    glVertex2f(1.3,0);
    glVertex2f(2.7,0);
    glVertex2f(2.7,1.9);
    glVertex2f(1.3,1.9);
    glEnd();
//9______3___________

//10__________1___________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(4.3,1.5);
    glVertex2f(6.2,1.5);
    glVertex2f(6.2,1.8);
    glVertex2f(4.3,2.5);
    glEnd();
//10___________2___________
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(4.4,1.6);
    glVertex2f(6.1,1.6);
    glVertex2f(6.1,1.75);
    glVertex2f(4.4,2.35);
    glEnd();
//10______3___________
//11__________!___________
    glColor3ub(230, 230, 230);
    glBegin(GL_QUADS);
    glVertex2f(4.8,0);
    glVertex2f(5.8,0);
    glVertex2f(5.8,1.2);
    glVertex2f(4.8,1.2);
    glEnd();
//11_________2_____________
    glColor3ub(45, 89, 134);
    glBegin(GL_QUADS);
    glVertex2f(4.9,0);
    glVertex2f(5.7,0);
    glVertex2f(5.7,1.1);
    glVertex2f(4.9,1.1);
    glEnd();
//11______3___________

    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);
}


void windmill1(){
    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);

    glTranslatef(30, 30, 0);
    glScalef(1.25, 1.25, 0);

    glPushMatrix();
    glRotatef(angle, 0.0,0.0,1.0);
    glColor3ub(255, 255, 179);
    glBegin(GL_QUADS);
    glVertex2f(-.9,1.4);
    glVertex2f(0,0);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-.45,6);
    glVertex2f(0,6);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glRotatef(angle+120, 0.0,0.0,1.0);
    glColor3ub(255, 255, 179);
    glBegin(GL_QUADS);
    glVertex2f(-.9,1.4);
    glVertex2f(0,0);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-.45,6);
    glVertex2f(0,6);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glRotatef(angle+240, 0.0,0.0,1.0);
    glColor3ub(255, 255, 179);
    glBegin(GL_QUADS);
    glVertex2f(-.9,1.4);
    glVertex2f(0,0);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-.45,6);
    glVertex2f(0,6);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glPopMatrix();

    //glColor3ub(255, 255, 179);
    glColor3ub(255, 255, 179);
    filledCircle(0, 0, 0.5);

	glColor3ub(255, 255, 179);
    glBegin(GL_QUADS);
    glVertex2f(-.2,0);
    glVertex2f(.2,0);
    glVertex2f(.5,-15);
    glVertex2f(-.5,-15);
    glEnd();

    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);
}


void windmill2(){
    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);

    glTranslatef(50, 25, 0);
    glScalef(1.25, 1.25, 0);

    glPushMatrix();
    glRotatef(angle, 0.0,0.0,1.0);
    glColor3ub(255, 255, 179);
    glBegin(GL_QUADS);
    glVertex2f(-.9,1.4);
    glVertex2f(0,0);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-.45,6);
    glVertex2f(0,6);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glRotatef(angle+120, 0.0,0.0,1.0);
    glColor3ub(255, 255, 179);
    glBegin(GL_QUADS);
    glVertex2f(-.9,1.4);
    glVertex2f(0,0);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-.45,6);
    glVertex2f(0,6);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glRotatef(angle+240, 0.0,0.0,1.0);
    glColor3ub(255, 255, 179);
    glBegin(GL_QUADS);
    glVertex2f(-.9,1.4);
    glVertex2f(0,0);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-.45,6);
    glVertex2f(0,6);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glPopMatrix();

    //glColor3ub(255, 255, 179);
    glColor3ub(255, 255, 179);
    filledCircle(0, 0, 0.5);

	glColor3ub(255, 255, 179);
    glBegin(GL_QUADS);
    glVertex2f(-.2,0);
    glVertex2f(.2,0);
    glVertex2f(.5,-15);
    glVertex2f(-.5,-15);
    glEnd();

    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);
}

void windmill3(){
    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);

    glTranslatef(80, 10, 0);
    glScalef(1.25, 1.25, 0);

    glPushMatrix();
    glRotatef(angle, 0.0,0.0,1.0);
    glColor3ub(255, 255, 179);
    glBegin(GL_QUADS);
    glVertex2f(-.9,1.4);
    glVertex2f(0,0);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-.45,6);
    glVertex2f(0,6);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glRotatef(angle+120, 0.0,0.0,1.0);
    glColor3ub(255, 255, 179);
    glBegin(GL_QUADS);
    glVertex2f(-.9,1.4);
    glVertex2f(0,0);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-.45,6);
    glVertex2f(0,6);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glRotatef(angle+240, 0.0,0.0,1.0);
    glColor3ub(255, 255, 179);
    glBegin(GL_QUADS);
    glVertex2f(-.9,1.4);
    glVertex2f(0,0);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-.45,6);
    glVertex2f(0,6);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glPopMatrix();

    //glColor3ub(255, 255, 179);
    glColor3ub(255, 255, 179);
    filledCircle(0, 0, 0.5);

	glColor3ub(255, 255, 179);
    glBegin(GL_QUADS);
    glVertex2f(-.2,0);
    glVertex2f(.2,0);
    glVertex2f(.5,-15);
    glVertex2f(-.5,-15);
    glEnd();

    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);
}


void windmill4(){
    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);

    glTranslatef(100, 20, 0);
    glScalef(1.25, 1.25, 0);

    glPushMatrix();
    glRotatef(angle, 0.0,0.0,1.0);
    glColor3ub(255, 255, 179);
    glBegin(GL_QUADS);
    glVertex2f(-.9,1.4);
    glVertex2f(0,0);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-.45,6);
    glVertex2f(0,6);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glRotatef(angle+120, 0.0,0.0,1.0);
    glColor3ub(255, 255, 179);
    glBegin(GL_QUADS);
    glVertex2f(-.9,1.4);
    glVertex2f(0,0);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-.45,6);
    glVertex2f(0,6);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glRotatef(angle+240, 0.0,0.0,1.0);
    glColor3ub(255, 255, 179);
    glBegin(GL_QUADS);
    glVertex2f(-.9,1.4);
    glVertex2f(0,0);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glColor3ub(255, 140, 26);
    glBegin(GL_QUADS);
    glVertex2f(-.45,6);
    glVertex2f(0,6);
    glVertex2f(0,9);
    glVertex2f(-.2,8.5);
    glEnd();
    glPopMatrix();

    //glColor3ub(255, 255, 179);
    glColor3ub(255, 255, 179);
    filledCircle(0, 0, 0.5);

	glColor3ub(255, 255, 179);
    glBegin(GL_QUADS);
    glVertex2f(-.2,0);
    glVertex2f(.2,0);
    glVertex2f(.5,-15);
    glVertex2f(-.5,-15);
    glEnd();

    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);
}


void housesAndWindmills()
{
    type1House1();
    type1House2();
    type1House3();
    type2House1();
    type2House2();
    type2House3();
    factory1();
    factory2();
    factory3();
    windmill1();
    windmill2();
    windmill3();
    windmill4();
}






void drawScene(){
    //Draw scene here!!!!!!!!!!!!!

    // Sky
    glColor3ub(129, 219, 250);
    glBegin(GL_QUADS);
    glVertex2f(-120, 70);
    glVertex2f(-120, 90);
    glVertex2f(120, 90);
    glVertex2f(120, 70);
    glEnd();

    // Sun
    glColor3ub(232, 219, 13);
    filledCircle(85, 80, 7);

    // Mountain range
    glColor3ub(154, 107, 43);
    glBegin(GL_QUADS);
    glVertex2f(-120, 65);
    glVertex2f(-120, 70);
    glVertex2f(120, 70);
    glVertex2f(120, 65);
    glEnd();

    // 1
    glColor3ub(154, 107, 43);
    glBegin(GL_TRIANGLES);
    glVertex2f(-120, 70);
    glVertex2f(-100, 90);
    glVertex2f(-70, 70);
    glEnd();

    // 2
    glColor3ub(154, 107, 43);
    glBegin(GL_TRIANGLES);
    glVertex2f(-78, 70);
    glVertex2f(-64, 85);
    glVertex2f(-50, 70);
    glEnd();

    // 3
    glColor3ub(154, 107, 43);
    glBegin(GL_TRIANGLES);
    glVertex2f(-70, 70);
    glVertex2f(-55, 90);
    glVertex2f(-40, 70);
    glEnd();

    // 4
    glColor3ub(154, 107, 43);
    glBegin(GL_TRIANGLES);
    glVertex2f(-50, 70);
    glVertex2f(-35, 88);
    glVertex2f(-10, 70);
    glEnd();

    // 4 Extended
    glColor3ub(154, 107, 43);
    glBegin(GL_TRIANGLES);
    glVertex2f(-35, 70);
    glVertex2f(-20, 85);
    glVertex2f(-5, 70);
    glEnd();

    // 5
    glColor3ub(154, 107, 43);
    glBegin(GL_TRIANGLES);
    glVertex2f(-15, 70);
    glVertex2f(5, 90);
    glVertex2f(20, 70);
    glEnd();

    // 6
    glColor3ub(154, 107, 43);
    glBegin(GL_TRIANGLES);
    glVertex2f(15, 70);
    glVertex2f(37, 90);
    glVertex2f(50, 70);
    glEnd();

    // 7
    glColor3ub(154, 107, 43);
    glBegin(GL_TRIANGLES);
    glVertex2f(30, 70);
    glVertex2f(45, 85);
    glVertex2f(55, 70);
    glEnd();

    // 8
    glColor3ub(154, 107, 43);
    glBegin(GL_TRIANGLES);
    glVertex2f(50, 70);
    glVertex2f(68, 85);
    glVertex2f(85, 70);
    glEnd();

    // 9
    glColor3ub(154, 107, 43);
    glBegin(GL_TRIANGLES);
    glVertex2f(80, 70);
    glVertex2f(100, 85);
    glVertex2f(110, 70);
    glEnd();

    // 10
    glColor3ub(154, 107, 43);
    glBegin(GL_TRIANGLES);
    glVertex2f(90, 70);
    glVertex2f(110, 90);
    glVertex2f(120, 70);
    glEnd();


    // Grassland above river
    glColor3ub(143, 209, 67);
    glBegin(GL_QUADS);
    glVertex2f(-120, 56);
    glVertex2f(-120, 65);
    glVertex2f(120, 65);
    glVertex2f(120, 56);
    glEnd();

    // Mud above the river
    glColor3ub(202, 147, 73);
    glBegin(GL_QUADS);
    glVertex2f(-120, 55);
    glVertex2f(-120, 56);
    glVertex2f(120, 56);
    glVertex2f(120, 55);
    glEnd();

    // River
    glColor3ub(56, 167, 215);
    glBegin(GL_QUADS);
    glVertex2f(-120, 36);
    glVertex2f(-120, 55);
    glVertex2f(120, 55);
    glVertex2f(120, 36);
    glEnd();

    // Mud below the river
    glColor3ub(202, 147, 73);
    glBegin(GL_QUADS);
    glVertex2f(-120, 35);
    glVertex2f(-120, 36);
    glVertex2f(120, 36);
    glVertex2f(120, 35);
    glEnd();

    // Grassland below river
    glColor3ub(143, 209, 67);
    glBegin(GL_QUADS);
    glVertex2f(-120, -34);
    glVertex2f(-120, 35);
    glVertex2f(120, 35);
    glVertex2f(120, -34);
    glEnd();

    // No grass above road
    glColor3ub(202, 147, 73);
    glBegin(GL_QUADS);
    glVertex2f(-120, -35);
    glVertex2f(-120, -34);
    glVertex2f(120, -34);
    glVertex2f(120, -35);
    glEnd();

    // Countryside road
    glColor3ub(139, 139, 143);
    glBegin(GL_QUADS);
    glVertex2f(-120, -74);
    glVertex2f(-120, -35);
    glVertex2f(120, -35);
    glVertex2f(120, -74);
    glEnd();

    // Road divider
    glColor3ub(241, 241, 241);
    glBegin(GL_QUADS);
    glVertex2f(-120, -54.5);
    glVertex2f(-120, -54);
    glVertex2f(120, -54);
    glVertex2f(120, -54.5);
    glEnd();

    // No grass below road
    glColor3ub(202, 147, 73);
    glBegin(GL_QUADS);
    glVertex2f(-120, -75);
    glVertex2f(-120, -74);
    glVertex2f(120, -74);
    glVertex2f(120, -75);
    glEnd();






    housesAndWindmills();

    /*// Axis
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0, 120);
    glVertex2f(0, -120);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(-120, 0);
    glVertex2f(120, 0);
    glEnd();
    */
}

#endif // SCENE_H
