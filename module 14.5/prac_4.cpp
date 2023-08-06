#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        q.push(x);
    }
    stack<int>s;
    for(int i=0;i<n;i++){
        s.push(q.front());
        q.pop();
    }
    queue<int>newQ;
    for(int i=0;i<n;i++){
        newQ.push(s.top());
        s.pop();
    }
    for(int i=0;i<n;i++){
        cout<<newQ.front()<<" ";
        newQ.pop();
    }
    return 0;
}