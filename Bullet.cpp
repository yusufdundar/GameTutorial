#include "Bullet.h"
#include <QTimer>
#include <QGraphicsScene>

Bullet::Bullet()
{
    setRect(0,0,10,50);
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}

void Bullet::move()
{
    setPos(x(),y()-10);

    if ( y() + rect().height() < 0 )
    {
       timer->stop();
       scene()->removeItem(this);
       this->deleteLater();
    }
}
