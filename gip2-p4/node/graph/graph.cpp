//
//  graph.cpp
//  gip2-p4
//
//  Created by Marco Schöttelkotte on 18.05.22.
//

#include "graph.hpp"


void Graph::Add(Node &node){
    this->nodes_.push_back({node});
}

string Graph::ToString(){
    stringstream stream;
    stream << "graph {\n";
    for(auto &node : this->nodes_){
        if(node.type == "H"){
            string type = "box";
            FastNode fastNode(node.nodeName, type, node.x, node.y);
            stream <<"  " << fastNode.ToString() << "\n";
        }
        if(node.type == "L"){
            string type = "circle";
            SlowNode slowNode(node.nodeName, type, node.x, node.y);
            stream << "  " << slowNode.ToString() << "\n";
        }
    }
    stream << "}";
    return stream.str();
}
