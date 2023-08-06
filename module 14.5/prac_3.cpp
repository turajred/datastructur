#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s,s1;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        s.push(x);
    }
    for(int i=0;i<n;i++){
        s1.push(s.top());
        s.pop();
    }
    for(int i=0;i<n;i++){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    return 0;
}