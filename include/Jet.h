#ifndef JET_H
#define JET_H
#include <GL/glut.h>
#include <vector>

void circle1(GLfloat x, GLfloat y, GLfloat radius)
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

class Jet
{
    double y;
    double xl = 100, xr = 120;
    public:
        Jet(double y){
            this->y = y;
        }
        void draw(){
            glPushMatrix();


                // code for new fighter plane started here

                // glass
                glColor3ub(51, 208, 203);
                circle1(xl+5, y+0.8, 2);

                // body
                glColor3ub(227, 24, 128);
                //glColor3ub(162, 22, 13);
                glBegin(GL_POLYGON);
                glVertex2f(xl, y+0);
                glVertex2f(xl+3, y+1.5);
                glVertex2f(xl+18.5, y+1.5);
                glVertex2f(xl+18.5, y-1.5);
                glVertex2f(xl+3, y-1.5);
                glEnd();

                // right wing
                glColor3ub(250, 116, 185);
                //glColor3ub(202, 43, 32);
                glBegin(GL_QUADS);
                glVertex2f(xl+9, y+1.5);
                glVertex2f(xl+13.5, y+5);
                glVertex2f(xl+15, y+5);
                glVertex2f(xl+13.5, y+1.5);
                glEnd();

                // tail
                glColor3ub(227, 24, 128);
                //glColor3ub(162, 22, 13);
                glBegin(GL_QUADS);
                glVertex2f(xr-3, y+1.5);
                glVertex2f(xr-2, y+4);
                glVertex2f(xr, y+5);
                glVertex2f(xr-1.5, y-1.5);
                glEnd();

                // left wing
                glColor3ub(250, 116, 185);
                //glColor3ub(202, 43, 32);
                glBegin(GL_QUADS);
                glVertex2f(xl+7.5, y-1.5);
                glVertex2f(xl+15, y-5);
                glVertex2f(xl+17, y-5);
                glVertex2f(xl+14, y-1.5);
                glEnd();

                // code for new fighter plane ended here*/

            glPopMatrix();
            return;
        }
        void updateX(double value){
            this->xr += value;
            this->xl += value;
        }
        bool isHit(double bulletX, double bulletY){
            return (bulletY < y+5 && bulletY >= y-5) && ((bulletX-1 <= xr && bulletX-1 > xl) || (bulletX+1 < xr && bulletX+1 >= xl));
        }
        std::pair <double, double> getX(){
            return {xl, xr};
        }
        double getY(){
            return y;
        }
};
std::vector<Jet> jet;

#endif // JET_H
