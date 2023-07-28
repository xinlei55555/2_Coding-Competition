#include <bits/stdc++.h>
using namespace std;

//!sum of the graph's degree is always 2n, where n is the number of edges.
    /* a degree is the number of neighbours to a node
        components are groups that are connected together in a graph
        indegree = number of edges that end at the  node
        outdegree = number of edges that come out of the node
        *In a coloring of a graph, each node is assigned a color so that no adjacent nodes
            have the same color.
        A graph is bipartite if it is possible to color it using two colors. It turns out
            that a graph is bipartite exactly when it does not contain a cycle with an odd
            number of edges. For example, the graph*
        A graph is simple if NO edge starts and ends at the same node AND there are no DOUBLE edges between node.

    */

/*
    ways of storing: 
    *1. Adjacency list:
        each node stores its own neigbours
    *2 Adjacency matrix:
        Each NxN matrix contains each connection
        (just like an adjacency list, but when 0 connection, we write in the matrix 0)
            faster to retrive values, since we know the index we are looking for.
    If the graph is weighted, the adjacency matrix representation can be extended
        so that the matrix contains the weight of the edge if the edge exists. Using this
        representation, the graph
        ~by multiplying each edge by the weight, before storing the new value into the adjacency matrix.
    *3. Edge list representation
        basically, a vector<pair<int, int>> (or a unordered-map)
        the first int is the first node
        second int = second node

        if we want the weights
        vector<tuple<int, int, int>> OR  
        
        struct Edge{
            int first;
            int second;
            int weight;
        };
        vector<Edge>
*/
/* random test on structures*/
struct Test{
    int hi;
    int hello;
};
int trying_structures(){
    Test test,tst2;
    test.hi=1;
    tst2.hi=2;
    tst2.hello=1;
    cout<<(test.hi==tst2.hi)<<(test.hi==tst2.hello)<<endl;
}


int main(){
    trying_structures();
    return 0;
}