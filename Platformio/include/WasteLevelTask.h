#ifndef __WASTELEVEL__
#define __WASTELEVEL__

#include "Task.h"
#include "Costants.h"
#include "ContainerProp.h"

extern int currentState;

class WasteLevelTask: public Task {
public:
    WasteLevelTask(int pinTrig, int pinEcho, ContainerProp container);  
    void init(int period);  
    void tick();
    int readLevel();
    bool isFull();
private:
    int pinTrig;
    int pinEcho;
    ContainerProp container;
};

#endif
