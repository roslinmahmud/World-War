#ifndef TANK_H
#define TANK_H
#include <GL/glut.h>

void circle2(GLfloat x, GLfloat y, GLfloat radius)
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

class Tank{
    double x = 0.0;
    // for balancing coordinates in y axis
    double y=60;

public:
    // wheel rotation
    double spin=0.1;

    Tank(){
    }
    void draw(){
        glPushMatrix();

            // code for new tank started here

            // body
            glColor3ub(177, 12, 12);
            glBegin(GL_POLYGON);
            glVertex2f(-11.5+x, 0-y);
            glVertex2f(-11.5+x, 5-y);
            glVertex2f(-10.5+x, 7-y);
            glVertex2f(12.5+x, 7-y);
            glVertex2f(13.5+x, 5-y);
            glVertex2f(13.5+x, 0-y);
            glEnd();

            glColor3ub(125, 7, 7);
            glBegin(GL_QUADS);
            glVertex2f(-6.5+x, 7-y);
            glVertex2f(-5.5+x, 12-y);
            glVertex2f(5.5+x, 12-y);
            glVertex2f(7.5+x, 7-y);
            glEnd();

            // head light
            glColor3ub(229, 226, 23);
            glBegin(GL_QUADS);
            glVertex2f(13.5+x, 5-y);
            glVertex2f(13+x, 6-y);
            glVertex2f(11+x, 6-y);
            glVertex2f(11+x, 5-y);
            glEnd();

            // front grill
            glColor3ub(102, 21, 14);
            glBegin(GL_QUADS);
            glVertex2f(5.5+x, 12-y);
            glVertex2f(12.5+x, 7-y);
            glVertex2f(11.5+x, 7-y);
            glVertex2f(5.9+x, 11-y);
            glEnd();

            // back grill
            glColor3ub(102, 21, 14);
            glBegin(GL_QUADS);
            glVertex2f(-8.5+x, 7-y);
            glVertex2f(-9.5+x, 7-y);
            glVertex2f(-5.8+x, 10.2-y);
            glVertex2f(-6+x, 9-y);
            glEnd();

            // firing dock
            glColor3ub(72, 20, 16);
            glBegin(GL_QUADS);
            glVertex2f(-4+x, 12-y);
            glVertex2f(-4.5+x, 14.5-y);
            glVertex2f(-3.5+x, 14.5-y);
            glVertex2f(-2.5+x, 12-y);
            glEnd();

            glColor3ub(72, 20, 16);
            glBegin(GL_QUADS);
            glVertex2f(4+x, 12-y);
            glVertex2f(4.5+x, 14.5-y);
            glVertex2f(3.5+x, 14.5-y);
            glVertex2f(2.5+x, 12-y);
            glEnd();

            glColor3ub(72, 20, 16);
            glBegin(GL_QUADS);
            glVertex2f(-2+x, 12-y);
            glVertex2f(-2+x, 13-y);
            glVertex2f(2+x, 13-y);
            glVertex2f(2+x, 12-y);
            glEnd();

            glColor3ub(72, 20, 16);
            glBegin(GL_QUADS);
            glVertex2f(-1+x, 13-y);
            glVertex2f(-1+x, 17-y);
            glVertex2f(1+x, 17-y);
            glVertex2f(1+x, 13-y);
            glEnd();

            //  armored windows
            glColor3ub(77, 6, 0);
            glBegin(GL_QUADS);
            glVertex2f(-4.5+x, 6-y);
            glVertex2f(-4.5+x, 10-y);
            glVertex2f(-1+x, 10-y);
            glVertex2f(-1+x, 6-y);
            glEnd();

            glColor3ub(77, 6, 0);
            glBegin(GL_QUADS);
            glVertex2f(1+x, 6-y);
            glVertex2f(1+x, 10-y);
            glVertex2f(4.5+x, 10-y);
            glVertex2f(4.5+x, 6-y);
            glEnd();

            glPopMatrix();

    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);

            glPushMatrix();
            // wheels

            // left wheel

            // rotation mechanism
            glTranslatef(x-5.5, 0-y, 0);
            glRotatef(spin, 0, 0, 1);
            glTranslatef(5.5, 0, 0);
            // rotation mechanism

            glColor3ub(0,0,0);
            circle2(-5.5, 0, 3);

            glColor3ub(223, 167, 18);
            glBegin(GL_TRIANGLES);
            glVertex2f(-5.5, 0);
            glVertex2f(-6.5, 2.5);
            glVertex2f(-4.5, 2.5);
            glEnd();

            glColor3ub(223, 167, 18);
            glBegin(GL_TRIANGLES);
            glVertex2f(-5.5, 0);
            glVertex2f(-6.5, -2.5);
            glVertex2f(-4.5, -2.5);
            glEnd();

            glColor3ub(223, 167, 18);
            glBegin(GL_TRIANGLES);
            glVertex2f(-5.5, 0);
            glVertex2f(-8, 1);
            glVertex2f(-8, -1);
            glEnd();

            glColor3ub(223, 167, 18);
            glBegin(GL_TRIANGLES);
            glVertex2f(-5.5, 0);
            glVertex2f(-3, 1);
            glVertex2f(-3, -1);
            glEnd();

            glPopMatrix();

    glLoadIdentity();
    gluOrtho2D(-120, 120, -90, 90);

            glPushMatrix();
            // right wheel

            // rotation mechanism
            glTranslatef(x+8.5, 0-y, 0);
            glRotatef(spin, 0, 0, 1);
            glTranslatef(-8.5, 0, 0);
            // rotation mechanism

            glColor3ub(0,0,0);
            circle2(8.5, 0, 3);

            glColor3ub(223, 167, 18);
            glBegin(GL_TRIANGLES);
            glVertex2f(8.5, 0);
            glVertex2f(7.5, 2.5);
            glVertex2f(9.5, 2.5);
            glEnd();

            glColor3ub(223, 167, 18);
            glBegin(GL_TRIANGLES);
            glVertex2f(8.5, 0);
            glVertex2f(7.5, -2.5);
            glVertex2f(9.5, -2.5);
            glEnd();

            glColor3ub(223, 167, 18);
            glBegin(GL_TRIANGLES);
            glVertex2f(8.5, 0);
            glVertex2f(11, 1);
            glVertex2f(11, -1);
            glEnd();

            glColor3ub(223, 167, 18);
            glBegin(GL_TRIANGLES);
            glVertex2f(8.5, 0);
            glVertex2f(6, 1);
            glVertex2f(6, -1);
            glEnd();

            // code for new tank finished here

        glPopMatrix();
        return;
    }
    double getX(){
        return x;
    }
    void setX(double x){
        this->x = x;
        return;
    }
    double checkBoundary(double x){
        if(x > 120)
            return 120;
        else if(x < -120)
            return -120;
        else
            return x;
    }
};
Tank tank;

#endif // TANK_H
