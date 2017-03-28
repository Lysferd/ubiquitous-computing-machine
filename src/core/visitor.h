
# ifndef __VISITOR_H_INCLUDED__
# define __VISITOR_H_INCLUDED__

//#include "component.h"
//#include "composite.h"

class Component;

class Composite;

class Visitor {
    virtual void visit(Component) = 0;

    virtual void visit(Composite) = 0;
};

# endif
