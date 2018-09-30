#include <bits/stdc++.h>

using namespace std;

// Complete the electionWinner function below.
string electionWinner(vector<string> votes) {

    map<string,int> voteRanks;
    for(int i=0 ; i<votes.size() ; i++)
    {
        voteRanks[votes[i]]++;
        
    }
    
    
    int maxvotes = 0;
    string maxvotesCandidate = "";
    for(auto j : voteRanks)
    {
        if(j.second>=maxvotes)
        {
            maxvotes = j.second;
            maxvotesCandidate = j.first;
            
        }
        
    }
    
    return maxvotesCandidate;

}



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int votes_count;
    cin >> votes_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> votes(votes_count);

    for (int i = 0; i < votes_count; i++) {
        string votes_item;
        getline(cin, votes_item);

        votes[i] = votes_item;
    }

    string res = electionWinner(votes);

    fout << res << "\n";

    fout.close();

    return 0;
}
