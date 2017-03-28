//
// Created by 埜原菽也 on 2017/03/27.
//

#include "parameter.h"

void Parameter::set_initializer(Initializer initializer) {
    if (initializer.get_initial_value() != NULL) {
        try {
            value = strtod(initializer.get_initial_value(), NULL);
        }
        catch (...) {
            // ...
        }
    }

    super.set_initializer(initializer);
}

double Parameter::get_value(void) {
    return value;
}

void Parameter::set_value(double new_value) {
    value = new_value;
}

void Parameter::add_value(double value) {
    this->value += value;
}

string Parameter::get_value_string(void) {
    return to_string(value);
}

void Parameter::set_value_string(string label) {
    value = strtod(label, NULL);
}

void Parameter::prepare(void) {
    set_value_to_field();
    super.prepare();
}