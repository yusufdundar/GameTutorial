#include "MyRect.h"
#include <QDebug>
#include "Bullet.h"
#include <QGraphicsScene>
#include "Enemy.h"

void MyRect::keyPressEvent(QKeyEvent *event)
{

    if(event->key() == Qt::Key_Left)
    {
        if(pos().x()>0)
        setPos(x()-10,y());
    }
    else if(event->key() == Qt::Key_Right)
    {
        if(pos().x()+100<800)
        setPos(x()+10,y());
    }

    else if(event->key() == Qt::Key_Space)
    {
        //create a bullet
        Bullet *bullet = new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
    }
}

void MyRect::spawn()
{
    Enemy *enemy = new Enemy();
    scene()->addItem(enemy);
}
