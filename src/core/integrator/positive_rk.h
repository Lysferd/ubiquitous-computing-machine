//
// Created by 埜原菽也 on 2017/03/27.
//

#ifndef CTS_POSITIVE_RK_H
#define CTS_POSITIVE_RK_H

#include "runge_kutta.h"

class PositiveRK : public RungeKutta {
protected:
    void update(double);
};

#endif //CTS_POSITIVE_RK_H
