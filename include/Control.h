#ifndef CONTROL_H
#define CONTROL_H
#include <Tank.h>
#include <Bullet.h>
#include <Score.h>
#include <Sound.h>

int fireCount=getAmmo();

void setFireCount()
{
    fireCount+=2;
    if(fireCount>getAmmo())
        fireCount=getAmmo();
}

void keyboardFunc(unsigned char ch, int x, int y){
    switch(ch){
        case 'f':
            fireMissileSound();
            if(fireCount>0)
            {
                fireCount--;
                Bullet b(tank.getX());
                bullet.push_back(b);
            }
            break;
    }
    return;
}

void specialKeyFunc(int key, int x, int y){
    switch(key){
        case GLUT_KEY_LEFT:
            tank.spin+=12;
            tank.setX(tank.checkBoundary(tank.getX()-1.8));
            break;
        case GLUT_KEY_RIGHT:
            tank.spin-=12;
            tank.setX(tank.checkBoundary(tank.getX()+1.8));
            break;
    }
    return;
}

#endif // CONTROL_H
