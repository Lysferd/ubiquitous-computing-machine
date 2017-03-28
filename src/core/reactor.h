
#ifndef CTS_REACTOR_H
#define CTS_REACTOR_H

#include "composite.h"

class Reactor : public Composite {
protected:
    virtual void calculate(double) = 0;
};

#endif // CTS_REACTOR_H
