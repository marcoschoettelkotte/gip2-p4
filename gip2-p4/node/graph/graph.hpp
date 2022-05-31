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
    Graph(vector<vector<int>> matrix){
        this->matrix_ = matrix;
    };
    void Add(Node &node);
    void AddMatrix(int size);
    string ToString();
    string PrintMatrix();
    void AddMatrixNode(int column, int row);
    bool IsConnected(int column, int row);
private:
    vector<Node> nodes_;
    vector<vector<int>> matrix_;
};

#endif /* graph_hpp */
