
# ifndef __VARIABLE_LIST_H_INCLUDED__
# define __VARIABLE_LIST_H_INCLUDED__

#include <vector>
#include "variable.h"
#include "reactor_list.h"

class VariableList {
    std::vector<Variable> *variables;
    ReactorList *reactor_list;
    double min_dt;

    double adjust_dt(void);

private:
    double max_dt,
            max_r_threshold,
            min_r_threshold,
            adjust_dy_y,
            ratio,
            max_r,
            lest;

public:
    virtual double update(double) = 0;

    void set_links(ReactorList);

    void prepare(double, double, double, double);

    void log_indented(void);
};

# endif
