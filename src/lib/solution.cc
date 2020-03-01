#include "solution.h"
#include <stack>
#include <iostream>

vector<int> Graph::DFS(int root,vector<bool>& visited_nodes)
{
  vector<int> visit_dfs;
  stack<int> s;
  s.push(root);
  while(!s.empty())
  {
    int i=s.top();
    //cout<<"top ="<<i<<" ";
    s.pop();
    if(visited_nodes[i])
      continue;
    visited_nodes[i]=true;
    visit_dfs.push_back(i);
    auto it=v_.find(i);
    //set<int> neighbours;
    //neighbours=it->second;
    for(auto it1=(it->second).rbegin();it1!=(it->second).rend();it1++)
    {
      if(!visited_nodes[*it1])
      {  
        //cout<<"visit ="<< *it1 <<" ";
        s.push(*it1);
      }
    }
  }
  return visit_dfs;
}

