
# ifndef __CONCENTRATION_H_INCLUDED__
# define __CONCENTRATION_H_INCLUDED__

class Concentration : public Positive {
private:
    Node volume;

public:
    void add_dydt(double);

    double get_dydt(void);

    void add_value(double);

    double get_value(void);

    string get_value_string(void);

    void set_initializer(Initializer);

    void set_value(double);

    void set_value_string(string);
};

# endif
