#include<bits/stdc++.h>
using namespace std;
vector<bool> v;
vector<vector<int> > graph;

void addEdge(int a,int b)
{
  graph[a].push_back(b);
}

void bfs(int i)
{
  queue<int>q;
  v[i]=true;
  q.push(i);
  while(!q.empty())
  {
    int front = q.front();
    q.pop();

    cout<<front<<" ";
    for(int j = 0 ; j< graph[front].size() ; j++)
    {
      if(v[graph[front][j]]!=false)
      {
        q.push(graph[front][j]);
        v[graph[front][j]]=true;
      }
    }
  }


}



int main()
{
  int n,e;
  cin>>n>>e;

  v.assign(n,false);
  graph.assign(n,vector<int>());

  int a,b;
  for(int i=0 ; i<e; i++)
  {
    cin>>a>>b;
    addEdge(a,b);

  }

  for(int i=0; i<n; i++)
  {
    if(v[i]==false)
    {
      bfs(i);
    }
  }

  return 0;
}
