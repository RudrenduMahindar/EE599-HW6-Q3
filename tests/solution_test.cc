#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(DFSTest, ReturnVisitedVector) {
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
  vector<int> actual=g.DFS(root,visited_nodes);
  vector<int> expected={0, 1, 2, 3, 4, 6, 5};
  EXPECT_EQ(expected, actual);
}
