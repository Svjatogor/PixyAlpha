#ifndef TIMER_H
#define TIMER_H
#include <QTime>
class MyTimer;

class MyTimerDestroyer
{
private:
    MyTimer* p_instance;
public:
    ~MyTimerDestroyer();
    void initialize(MyTimer* timer);
};

class MyTimer : QTime
{
private:
    static MyTimer* timer_instance;
    static MyTimerDestroyer destroyer;
protected:
    MyTimer(){
        this->start();
    }
    friend class MyTimerDestroyer;
signals:
    void oneSecond();
public:
    static MyTimer& getInstance();
};

#endif // TIMER_H
