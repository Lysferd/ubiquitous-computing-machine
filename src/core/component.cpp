//
// Created by 埜原菽也 on 2017/03/27.
//

#include "component.h"

void Component::set_initializer(Initializer initializer) {
    parent = initializer.get_parent();
    name = initializer.get_name();

    if (parent != NULL) {
        root = parent.get_root();
        level = parent.get_level() + 1;
        hierarchical_name = parent.get_name() + CONNECTOR + name;
        parent.add_node(this);
    } else {
        root = (Composite) this;
        hierarchical_name = name;
    }

    initializer.set_name(NULL);
    units = initializer.get_units();
    initializer.set_units(NULL);
    value_string = initializer.get_initial_value();
    initializer.set_initial_value(NULL);

    //log
}

void Component::set_links() {
    //log
}

void Component::prepare() {
    //log
}

void Component::end() {
    //log
}

void Component::quit() {
    //log
}

void Component::accept(Visitor visitor) {
    visitor.visit(this);
}

bool Component::is_named(string s) {
    return name == s;
}

bool Component::is_prefixed(string prefix) {
    return boost::starts_with(name, prefix);
}