//
// Created by 埜原菽也 on 2017/03/27.
//

#include <fstream>
#include <iostream>
#include "lib/rapidxml.hpp"
#include "lib/rapidxml_utils.hpp"

int main() {
    std::cout << "Initializing\n";

    rapidxml::file<> xmlFile("../xml/cell.xml");
    rapidxml::xml_document<> doc;
    rapidxml::xml_node<> *root_node;

    doc.parse<0>(xmlFile.data());
    root_node = doc.first_node();

    for (rapidxml::xml_node<> *node = root_node; node; node = node->next_sibling()) {
        for (rapidxml::xml_attribute<> *attr = node->first_attribute(); attr; attr = attr->next_attribute()) {
            std::cout << "Node <" << node->name() << "> has attribute " << attr->name() << " ";
            std::cout << "= " << attr->value() << "\n";
        }

        if (node->next_sibling() == NULL && node->first_node() != NULL)
            node = node->first_node();
    }

    return 0;
}