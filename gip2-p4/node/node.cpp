//
//  node.cpp
//  gip2-p4
//
//  Created by Marco Schöttelkotte on 18.05.22.
//

#include "node.hpp"

Node::Node(string &nodeName, string &type, float x, float y) {
    this->nodeName = nodeName;
    this->type = type;
    this->x = x;
    this->y = y;
}

string Node::ToString() {
    //  FOO [pos="1.2,3.4!"]
    stringstream stream;
    stream << this->nodeName << " " << "[" << "pos=\"" << this->x << "," << this->y
    << "!\",shape=";
    
    return stream.str();
}
