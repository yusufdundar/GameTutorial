#ifndef MYRECT_H
#define MYRECT_H
#include<QGraphicsRectItem>
#include <QKeyEvent>


class MyRect : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:

    void keyPressEvent(QKeyEvent *event);

public slots:
    void spawn();
};

#endif // MYRECT_H
