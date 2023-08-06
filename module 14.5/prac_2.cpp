#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    queue<int>q;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        s.push(x);
    }
    int n1;cin>>n1;
    for(int i=0;i<n1;i++){
        int x;cin>>x;
        q.push(x);
    }
    bool flg=true;
    while(s.empty()!=true &&q.empty()!=true){
        int x=s.top(),y=q.front();
        if(x!=y){
            flg=false;
            break;
        }
        s.pop();
        q.pop();
    }
    if(flg) cout<<"YES";
    else cout<<"NO";
    return 0;
}