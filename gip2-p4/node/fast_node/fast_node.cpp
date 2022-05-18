//
//  fast_node.cpp
//  gip2-p4
//
//  Created by Marco Schöttelkotte on 18.05.22.
//

#include "fast_node.hpp"

string FastNode::ToString() {
    stringstream stream;
    stream << Node::ToString() << this->type << "]";
    return stream.str();
}
