//
// Created by Charles Abou Haidar on 2020-01-22.
//
#include "Cpp-Graph-Library-master/Graph.h"
#include "Cpp-Graph-Library-master/Node.h"
#include "VGMapLoader.h"
#include "VGMap.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;


VGMapLoader::VGMapLoader() {



    ifstream myFile("/Users/andrehalrumhein/Desktop/Work/School/Winter 2020/COMP345/Project/COMP345-A1/VGMapLoad.txt");
    string mystring, data, nodeNumber;
    if(!myFile.is_open()){
        perror("Error opening");
        exit(EXIT_FAILURE);
    }
    else {
        while (getline(myFile, mystring)) {
            if(mystring.empty()){ //if empty line just skip
                continue;
            }
            else if(mystring.size() > 7){ //format is: nodeNumber data (total of 7 characters)
                perror("Incorrect format, map can't load");
                exit(EXIT_FAILURE);
            }
            istringstream var(mystring);
            var >> nodeNumber >> data; //first number is the node number, second number is the data inside of that node(topRight,topLeft,bottomRight,bottomLeft, playerID)
            output(nodeNumber, data);
            board->addNode(stod(data), nodeNumber);
        }
        myFile.close();
    }
}

void VGMapLoader::output(string nodeNumber, string data){
    cout << "\nNode number: " << nodeNumber << endl;
    cout << "Data: " << data << endl;
}
    myFile.close();
}
