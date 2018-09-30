//Image Matching Algorithm

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
bool shouldNotConsider = false;

//DFS to check for connected regions in undirected graph
void DFS(vector<string> gridFinal,int row, int col, bool visited[][100])
{   
	//Neighbors of a cell
	static int rowNbr[] = {-1,0,0,1}; 
    static int colNbr[] = {0,-1,1,0};
  

   visited[row][col] = true;
 
   
   for(int k=0 ; k<4 ; k++)
    {   

        if((row+rowNbr[k]>=0) && (row+rowNbr[k]<gridFinal.size()) && (col+colNbr[k]>=0) && (col+colNbr[k]<gridFinal.size())) 
    	{   if(gridFinal[row+rowNbr[k]][col+colNbr[k]] == '1')
    		{
    			shouldNotConsider = true;
    		}

            if(gridFinal[row+rowNbr[k]][col+colNbr[k]] == '2' && visited[row+rowNbr[k]][col+colNbr[k]]==false) 
			{DFS(gridFinal,row + rowNbr[k],col + colNbr[k],visited);}
		}
    }

    }

// Complete the countMatches function below.
int countMatches(vector<string> grid1, vector<string> grid2) {

        bool visitedGrid1[100][100];
        memset(visitedGrid1, false, sizeof(visitedGrid1));

   		
		for(int i=0 ; i<grid1.size(); i++)
   		{
   			for(int j=0; j<grid1.size(); j++)
   			{
   				if(grid1[i][j]=='1' && grid2[i][j]=='1')
   				{
   					grid1[i][j]='2';
   				}

   				else if(grid1[i][j]=='1' && grid2[i][j]=='0')
   				{
   					grid1[i][j]='1';

   				}

   				else if(grid1[i][j]=='0' && grid2[i][j]=='1')
   				{
   					grid1[i][j]='1';

   				}

   				else
   				{
   					grid1[i][j]='0';
   				}


   			}
   		}

   	
		int countGrid1=0; 
        

        for(int i=0 ; i<grid1.size();i++)
        {   
        	
        	for(int j=0 ; j<grid1.size() ; j++)
        	{    

        		if(grid1[i][j]=='2' && !visitedGrid1[i][j])
        		{   
                    
        			DFS(grid1,i,j,visitedGrid1);

        			if(shouldNotConsider==false)
        			{countGrid1++;}
        			shouldNotConsider=false;
        		}


        	}
        
        }

      	return countGrid1;

    

}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string grid1_count_temp;
    getline(cin, grid1_count_temp);

    int grid1_count = stoi(ltrim(rtrim(grid1_count_temp)));

    vector<string> grid1(grid1_count);

    for (int i = 0; i < grid1_count; i++) {
        string grid1_item;
        getline(cin, grid1_item);

        grid1[i] = grid1_item;
    }

    string grid2_count_temp;
    getline(cin, grid2_count_temp);

    int grid2_count = stoi(ltrim(rtrim(grid2_count_temp)));

    vector<string> grid2(grid2_count);

    for (int i = 0; i < grid2_count; i++) {
        string grid2_item;
        getline(cin, grid2_item);

        grid2[i] = grid2_item;
    }

    int res = countMatches(grid1, grid2);

    fout << res << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}