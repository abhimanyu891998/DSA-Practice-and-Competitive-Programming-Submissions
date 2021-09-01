#include<bits/stdc++.h>

using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(4);
    pq.push(3);
    pq.push(2);
    pq.push(6);

    int cost = 0;

    while(pq.size()>1){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        cost+= (a+b);
        pq.push(a+b);
    }

    cout<<cost;
}