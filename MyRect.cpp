#include "MyRect.h"
#include <QDebug>
#include "Bullet.h"
#include <QGraphicsScene>

void MyRect::keyPressEvent(QKeyEvent *event)
{

    if(event->key() == Qt::Key_Left)
    {
        setPos(x()-10,y());
    }
    else if(event->key() == Qt::Key_Right)
    {
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
