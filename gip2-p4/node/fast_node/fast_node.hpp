//
//  fast_node.hpp
//  gip2-p4
//
//  Created by Marco Schöttelkotte on 18.05.22.
//

#ifndef fast_node_hpp
#define fast_node_hpp

#include <iostream>
#include <string>
#include <sstream>
#include "../node.hpp"

using namespace std;

class FastNode : public Node {
public:
    FastNode(string &nodeName, string &type, float x, float y)
    : Node{nodeName, type, x, y}, nodeName_{nodeName}, type_{type}, x_{x}, y_{y} {};
    
    string ToString();
    
private:
    string nodeName_;
    string type_;
    float x_;
    float y_;
};

#endif /* fast_node_hpp */
