//
// Created by 埜原菽也 on 2017/03/27.
//

#ifndef CTS_RUNGE_KUTTA_LIST_H
#define CTS_RUNGE_KUTTA_LIST_H

#include "../variable_list.h"

class EulerList : public VariableList {
public:
    double update(double);
};

#endif //CTS_RUNGE_KUTTA_LIST_H
