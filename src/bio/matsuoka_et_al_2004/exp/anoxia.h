//
// Created by 埜原菽也 on 2017/03/27.
//

#ifndef CTS_ANOXIA_H
#define CTS_ANOXIA_H

#include "../../../core/node.h"
#include "../../../core/reactor.h"

class Anoxia : public Reactor {
public:
    Node oxygen;
    Node elapsed_time;
    double onset = 0.0;
    double offset = 0.0;
    double initial = 0.240;

protected:
    void calculate(double);
};

#endif //CTS_ANOXIA_H
