//
//  node.hpp
//  gip2-p4
//
//  Created by Marco Schöttelkotte on 18.05.22.
//

#ifndef node_hpp
#define node_hpp

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Node {
public:
    Node(string &nodeName, string &type, float x, float y);

    string ToString();
    string nodeName;
    string type;
    float x;
    float y;
};


#endif /* node_hpp */
