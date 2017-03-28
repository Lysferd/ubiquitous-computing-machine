
# ifndef __NODE_LIST_H_INCLUDED__
# define __NODE_LIST_H_INCLUDED__

//# include <vector>
#include "node.h"

class NodeList {
    std::vector <Node> *nodes;

    void set_links(void);

    void prepare(void);

protected:
    void end(void);

    void quit(void);
};

# endif
