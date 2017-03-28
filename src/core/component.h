
#ifndef __COMPONENT_H_INCLUDED__
#define __COMPONENT_H_INCLUDED__

#include <string>
#include "node.h"
#include "initializer.h"
#include "visitor.h"

class Composite;

class Component : public Node {
private:
    std::string CONNECTOR;// = "/";
    int level;// = 0;
    bool isLinked;// = false;
    Composite *parent,
            *root;
    std::string hierarchical_name,
            name,
            value_string,
            units,
            indent;

protected:
    void set_links(void);

    void prepare(void);

    void end(void);

    void quit(void);

public:
    void set_initializer(Initializer);

    void accept(Visitor);

    bool is_named(std::string);

    bool is_prefixed(std::string);

    std::string get_value_string(void);

    void set_value_string(std::string);

    void set_value(const double);

    void add_value(const double);

    double get_value(void);

    void add_dydt(const double);

    std::string get_name(void);

    std::string get_name(int);

    std::string get_short_name(void);

    Composite get_parent(void);

    Composite get_root(void);

    std::string get_units(void);

    std::string get_indent(void);

    std::string get_indented_Short_Name(void);

    void log_indented(std::string);

    int get_level(void);

    void set_linked(void);

    bool is_linked(void);
};

#endif
