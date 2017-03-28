
# ifndef __ANALYZER_LIST_H_INCLUDED__
# define __ANALYZER_LIST_H_INCLUDED__

//# include <vector>
#include "analyzer.h"

class AnalyzerList {
    std::vector<Analyzer> *analyzers;

    void analyze(double);

    void log_indented(void);
};

# endif
