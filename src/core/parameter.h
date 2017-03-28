
# ifndef __PARAMETER_H_INCLUDED__
# define __PARAMETER_H_INCLUDED__

#include <stdlib.h>
#include <string>
#include "component.h"
#include "initializer.h"

class Field;

class Parameter : public Component {
protected:
    double value;// = 0.0;

private:
    Field *field; // no field in cpp

public:
    typedef Component super;

    void set_initializer(Initializer);

    double get_value(void);

    void set_value(double);

    void add_value(double);

    std::string get_value_string(void);

    void set_value_string(std::string);

    void set_value_to_field(void);

protected:
    void prepare(void);

    void setField(Field *);
};

# endif
