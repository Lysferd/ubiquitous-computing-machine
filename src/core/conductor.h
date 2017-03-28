
# ifndef __CONDUCTOR_H_INCLUDED__
# define __CONDUCTOR_H_INCLUDED__

#include "node.h"
#include "reactor.h"

class Conductor : public Reactor {
public:
    Node elapsedTime;
    Node duration;
    Node timeStep;
    double dtMin;
    double dtMax;
    double adjustDyOverY;

private:
    double endTime;// = 10;
    bool calculate;// = false;
    bool active;// = true;
};

# endif
