
# ifndef __LINK_H_INCLUDED__
# define __LINK_H_INCLUDED__

#include "component.h"

class Link : public Component {
    // log

protected:
    void set_links(void);

    void prepare(void);
};

# endif
