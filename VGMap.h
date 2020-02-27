//
// Created by Charles Abou Haidar on 2020-01-22.
//

#include <string>
using std::string;
#ifndef COMP345_VGMAP_H
#define COMP345_VGMAP_H

#include "Cpp-Graph-Library-master/Graph.h"

class VGMap{
public:
    Graph *vgBoard;
    VGMap();
    ~VGMap();
    Graph* getBoard();
    string getNorth(string position);
    string getSouth(string position);
    string getEast(string position);
    string getWest(string position);
};

#endif //COMP345_VGMAP_H
