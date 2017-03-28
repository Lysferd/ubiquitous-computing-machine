//
// Created by 埜原菽也 on 2017/03/27.
//

#include "analyzer_list.h"

void AnalyzerList::analyze(double t) {
    for (int i = 0, n = size(); i < n; i++)
        ((Analyzer) get(i)).analyze(t);
}