// LC 210
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
              
        map<int,vector<int>> grph;
        
        if(prerequisites.size()==0) {
            vector<int> v;
            for(int i=0 ; i<=numCourses-1 ; i++) {
                v.push_back(i);
            }
            return v;
        }
        
        for(auto &v: prerequisites) {
            vector<int> &a = grph[v[1]];
            a.push_back(v[0]);
        }
        
        
        map<int,int> inD;
        
        int temp = numCourses-1;
        
        while(temp>=0) {
            inD[temp--] = 0;
            
        }
        
        for(auto &v: prerequisites) {
            inD[v[0]]++;
        }
        
        queue<int> indz;
        
        for( auto &a: inD) {
            if(a.second==0) {
                indz.push(a.first);
            }
        }
        
        if(indz.empty()) {
            
            return vector<int>{};
        }
        
        int visited = 0;
        vector<int> op;
        
        while(!indz.empty()) {
            int t = indz.front();
            op.push_back(indz.front());
            indz.pop();
            visited++;
            for(auto &i : grph[t]) {
                inD[i]--;
                if(inD[i]==0) {
                 
                    indz.push(i);
                }
            }
        }
        

        if(visited!=numCourses) {
            return vector<int>{};
        }
        
        return op;
        
    }
};