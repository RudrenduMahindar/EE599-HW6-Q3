#include <iostream>
#include "src/lib/solution.h"

int main()
{
    map<int,set<int>> vertices {{0,{1,2,5}}, 
    {1,{0,2,3}},
    {2,{0,1,3}},
    {3,{1,2,4,6}},
    {4,{3}},
    {5,{0}},
    {6,{3}}};
    Graph g(vertices);
    int root=0;
    int num_of_vertices=vertices.size();
    vector<bool> visited_nodes(num_of_vertices,false);
    vector<int> v=g.DFS(root,visited_nodes);
    cout<<"[";
    for(auto& i : v)
        cout<<" "<<i;
    cout<<" ]"<<endl;    
    return EXIT_SUCCESS;
}