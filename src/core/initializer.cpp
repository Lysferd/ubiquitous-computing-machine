//
// Created by 埜原菽也 on 2017/03/27.
//

#include "initializer.h"

Initializer::Initializer() {
    //super();
}

Initializer Initializer::get_instance(Composite composite, Attributes attributes) {
    initializer.parent = composite;
    initializer.name = attributes.get_value(NAME);
    initializer.initial_value = attributes.get_value(INITIAL_VALUE);
    initializer.units = attributes.get_value(UNITS);
    initializer.class_name = attributes.get_value(CLASS_NAME);
    return initializer;
}

string Initializer::get_class_name() {
    return class_name;
}