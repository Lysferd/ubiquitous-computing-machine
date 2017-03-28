//
// Created by 埜原菽也 on 2017/03/27.
//

#ifndef CTS_RUNGE_KUTTA_H
#define CTS_RUNGE_KUTTA_H

#include "../parameter.h"
#include "../variable.h"

class RungeKutta : public Parameter, public Variable {
private:
    static const double DIV6 = 1.0 / 6.0;
    static const double FCOR = 0.06666666; // 1.0 / 15.0
    int cycle = 0;
    double dydt[] = {0, 0, 0, 0};
    double temp_value = value;
    double y_save, dydt_save, scaling, yh;

public:
    void add_dydt(double);

    double get_dydt(void);

    double get_dydt_over_y(void);

    void set_value(double);

    void add_value(double);

protected:
    void prepare(void);

private:
    void next_cycle(double);

    void update(double);

    void qc_prepare(double);

    void qt_next(void);

    double get_error(void);

    void correct_error(void);
};

#endif //CTS_RUNGE_KUTTA_H
