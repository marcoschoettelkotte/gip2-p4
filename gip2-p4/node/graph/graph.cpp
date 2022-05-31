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
            stream << fastNode.ToString() << "\n";
        }
        if(node.type == "L"){
            string type = "circle";
            SlowNode slowNode(node.nodeName, type, node.x, node.y);
            stream << slowNode.ToString() << "\n";
        }
    }
    stream << "}";
    return stream.str();
}

void Graph::AddMatrix(int size){
//    int colums = matrix.size();
//    int rows = matrix[0].size();
    if(matrix_.size() <= 0){
        // create matrix
        vector<int> tmp(size, numeric_limits<int>::infinity());
        matrix_ = vector<vector<int>>(size, tmp);
    }
    
}
    
// column_size = row_size
string Graph::PrintMatrix(){
    stringstream stream;
    for(auto column: matrix_){
        for(auto row : column){
            stream << row << " ";
        }
        stream << "\n";
    }
    return stream.str();
}

void Graph::AddMatrixNode(int column, int row) {
    for(int c = 0; c <= column; c++){
        for(int r = 0; r <= row; r++){
            if(r == row && c == column){
                matrix_[c][r] = 1;
                matrix_[r][c] = 1;
            }
        }
    }
}

bool Graph::IsConnected(int column, int row) {
    if(matrix_[column][row] == 1 && matrix_[row][column] == 1){
        return true;
    }
        
    return false;
}
