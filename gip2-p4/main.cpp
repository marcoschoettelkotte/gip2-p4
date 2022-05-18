//
//  main.cpp
//  gip2-p4
//
//  Created by Marco Schöttelkotte on 18.05.22.
//

#include <iostream>
#include <string>
#include "node/node.hpp"
#include "node/graph/graph.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
//    string name = "FOO";
//    string type = "box";
//    float a = 2.3;
//    float b = 3.5;
    
    Graph graph;
    while(true){
        string type;
        string name;
        float x;
        float y;
        
        cin >> type;
        if(!cin.good()) break;
        cin >> name;
        if(!cin.good()) break;
        cin >> x;
        if(!cin.good()) break;
        cin >> y;
        if(!cin.good()) break;
        
        Node node(name, type, x, y);
        graph.Add(node);
    }
    cout << graph.ToString() << endl;
    
    return EXIT_SUCCESS;
}
