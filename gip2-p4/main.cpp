//
//  main.cpp
//  gip2-p4
//
//  Created by Marco Schöttelkotte on 18.05.22.
//

#include <iostream>
#include <string>
#include <fstream>
#include "node/node.hpp"
#include "node/graph/graph.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream ostream;
    vector<vector<int>> matrix;
    Graph graph(matrix);
    int columns;
    cin >> columns;
    if(!cin.good()) return EXIT_FAILURE;
    
    while(true){
        string type;
        string name;
        float x;
        float y;
        
        cin >> type;
        if(!cin.good()) break;
        if(type == "E") break;
        cin >> name;
        if(!cin.good()) break;
        cin >> x;
        if(!cin.good()) break;
        cin >> y;
        if(!cin.good()) break;
        
        Node node(name, type, x, y);
        graph.Add(node);
    }

    graph.AddMatrix(columns);
    while(true){
        int col;
        int row;
        cin >> col;
        if(!cin.good()) break;
        cin >> row;
        if(!cin.good()) break;
        graph.AddMatrixNode(col, row);
        
    }
   
    cout << graph.PrintMatrix() << endl;
    
    
    cout << "Finished" << endl;
    return EXIT_SUCCESS;
}
