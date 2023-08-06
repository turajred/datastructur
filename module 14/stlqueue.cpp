#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>s;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    while(!s.empty()){
        cout<<s.front()<<endl;
        s.pop();
    }
    return 0;
}