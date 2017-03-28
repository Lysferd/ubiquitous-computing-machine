
#ifndef __REACTOR_LIST_H_INCLUDED__
#define __REACTOR_LIST_H_INCLUDED__

//#include <vector>
//#include <mutex>
#include "reactor.h"

class ReactorList {
    std::vector<Reactor> *reactors;
    std::mutex _mutex;

public:
    void calculate(double);

    void log_indented(void);

    bool add(void *); // SYNCHRONIZED BOOLEAN ADD( OBJECT O )
};

# endif
