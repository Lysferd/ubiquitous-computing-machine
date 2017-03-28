/********************************************************
 * Variable calculation using the Euler Method.
 * Author: Fabio Moritz de Almeida
 * Based on the original code by Nobuaki Sarai.
 ********************************************************/

# ifndef __EULER_H_INCLUDED__
# define __EULER_H_INCLUDED__

# include "parameter.h"
# include "varible.h"

class Euler : public Parameter, public Variable {
protected:
    double dydt;

public:
    void add_dydt(double);

    double get_dydt(void);

    double get_dydt_over_y(void);

    void set_value(double);

    void add_value(double);
};

# endif
