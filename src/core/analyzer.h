
# ifndef __ANALYZER_H_INCLUDED__
# define __ANALYZER_H_INCLUDED__

#include "composite.h"

class Analyzer : public Composite {
protected:
    virtual void analyze(double) = 0;

public:
    virtual ~Analyzer(void) {}
};

# endif
