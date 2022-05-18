//
//  graph.hpp
//  gip2-p4
//
//  Created by Marco Schöttelkotte on 18.05.22.
//

#ifndef graph_hpp
#define graph_hpp

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

#include "../fast_node/fast_node.hpp"
#include "../slow_node/slow_node.hpp"
#include "../node.hpp"

using namespace std;

class Graph {
public:
    void Add(Node &node);
    string ToString();
private:
    vector<Node> nodes_;
};

#endif /* graph_hpp */
