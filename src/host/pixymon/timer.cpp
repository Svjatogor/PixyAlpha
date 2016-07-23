#include "timer.h"

MyTimer * MyTimer::timer_instance = 0;
MyTimerDestroyer MyTimer::destroyer;

MyTimerDestroyer::~MyTimerDestroyer(){
    delete p_instance;
}
void MyTimerDestroyer::initialize(MyTimer *timer){
    p_instance = timer;
}
MyTimer& MyTimer::getInstance(){
    if (!timer_instance){
        timer_instance = new MyTimer();
        destroyer.initialize(timer_instance);
    }
    return *timer_instance;
}
