
# ifndef CTS_NODE_H
# define CTS_NODE_H

class Node {
    virtual double get_value(void);

    virtual void set_value(const double);

    virtual void add_value(const double);

    virtual void add_dydt(const double);
};

# endif // CTS_NODE_H
