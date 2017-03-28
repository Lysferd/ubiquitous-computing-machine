//
// Created by 埜原菽也 on 2017/03/27.
//

#include "anoxia.h"

void Anoxia::calculate(double t) {
    if (offset == 0.0)
        offset = 1.0e50;

    double time = elapsed_time.get_value();
    if (time < onset)
        oxygen.set_value(initial);
    else if (time > onset && time >= offset)
        oxygen.set_value(initial);
    else
        oxygen.set_value(0);
}