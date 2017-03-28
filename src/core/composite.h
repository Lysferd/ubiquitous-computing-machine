
#ifndef __COMPOSITE_H_INCLUDED__
#define __COMPOSITE_H_INCLUDED__

#include <vector>
#include "parameter.h"
//#include "node.h"

class Iterator;

class Composite : public Parameter {

    std::vector<Node> *nodes;
    // static Log log = LogFactory.getLog( Composite.class );

public:
    void accept(Visitor);

    bool add_node(Component);

    Iterator get_nodes_iterator(void);

    int get_nodes_size(void);

    Node get_node(std::string);

protected:
    Node get_link(std::string);
};

#endif
