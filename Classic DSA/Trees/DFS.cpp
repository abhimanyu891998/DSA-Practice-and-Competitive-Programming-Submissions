#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > graph;
vector<bool> v;


void addEdge(int a,int b)
{
  graph[a].push_back(b);
}

void dfs(int i)
{
  stack<int> s;
  s.push(i);
  v[i]=true;
  while(!s.empty())
  {
    int next = s.top();
    s.pop();
    if(v[next]!=true)
    {v[next]=true;
    cout<<next<<" ";}

    for(int j=0; j<graph[next].size() ; j++)
    {
      if(v[next]==false)
      {s.push(graph[next][j]);
      }
    }

  }
}

int main()
{
int n,e;
cin>>n,e;

graph.assign(n, vector<int>());
v.assign(n,false);
int a,b;
for(int i=0 ; i<e ; i++)
{
  cin>>a>>b;
  addEdge(a,b);
}

for(int i=0 ; i<n ; i++)
{
  if(v[i]==false)
  {
    dfs(i);
  }
}

return 0;

}
