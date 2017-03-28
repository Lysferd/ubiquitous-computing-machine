
# ifndef __VARIABLE_H_INCLUDED__
# define __VARIABLE_H_INCLUDED__

#include "node.h"

class Variable : public Node {
    const double TINY;

public:
    Variable() : TINY(1.0e-30) {}

    virtual double get_dydt(void) = 0;

    virtual double get_dydt_over_y(void) = 0;
};

# endif
