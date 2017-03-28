
# ifndef __INITIALIZER_H_INCLUDED__
# define __INITIALIZER_H_INCLUDED__

#include <string>
//#include "composite.h"

class Composite;

class Attributes;

class Initializer {
public:
    std::string NAME;// = "name";
    std::string INITIAL_VALUE;// = "initial_value";
    std::string UNITS;// = "units";
    std::string CLASS_NAME;// = "className";

private:
    Initializer();

    //Initializer *initializer = void*;
    Composite *parent;
    std::string name,
            initial_value,
            units,
            class_name;

public:
    Initializer get_instance(Composite, Attributes);

    std::string get_class_name(void);

    std::string get_initial_value(void);

    std::string get_name(void);

    Composite get_parent(void);

    std::string get_units(void);

    void set_class_name(std::string);

    void set_initial_value(std::string);

    void set_name(std::string);

    void set_parent(Composite);

    void set_units(std::string);

    void clear(void);

    Initializer get_instance(std::string);
};

# endif
