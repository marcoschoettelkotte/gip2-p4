//
//  slow_node.cpp
//  gip2-p4
//
//  Created by Marco Schöttelkotte on 18.05.22.
//

#include "slow_node.hpp"

string SlowNode::ToString() {
    stringstream stream;
    stream << Node::ToString() << type << "]";
    return stream.str();
}

