//https://leetcode.com/discuss/interview-question/347457/Amazon-or-OA-2019-or-Treasure-Island

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<char>>island{
        {'O', 'O', 'O', 'O'},
        {'D', 'O', 'D', 'O'},
        {'O', 'O', 'O', 'O'},
        {'X', 'D', 'D', 'O'}
    }; 
    
    int e[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    
    bool visited[4][4];
    int cost[4][4];
    
    for(int i=0 ; i<4; i++)
    {
        
        for(int j=0 ; j<4 ; j++)
        {
            
            visited[i][j] = false;
        }
    }
    
        for(int i=0 ; i<4; i++)
    {
        
        for(int j=0 ; j<4 ; j++)
        {
            
            cost[i][j] = INT_MIN;
        }
    }
    
    queue<pair<int,int>> q;
    q.push(make_pair(0,0));
    visited[0][0] = true;
    cost[0][0] = 0;

    while(!q.empty())
    {
        
  
        int r = q.front().first;
        int c = q.front().second;
        int cst = cost[r][c];
 
        q.pop();

        for(int k=0 ; k<4 ; k++)
        {
            int x = r + e[k][0];
            int y = c + e[k][1];
            if(x>=0 && x<4 && y>=0 && y<4)
            {   
                
                if((!visited[x][y]) && island[x][y]!='D')
                {
                    
                    visited[x][y] = true;
                    if(island[x][y]=='X')
                    {
                        
  
                        cout<<cst+1<<endl;
                        return cst+1;

                    }

                    else
                    { 
                        
                        
                        q.push(make_pair(x,y));
                        cost[x][y] = cst+1;
                        
                    }
                     
                }
                
            }
            
 
        }
    }
    
    
    
    
    
    

}