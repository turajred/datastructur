#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        pq.push(x);
    }
    int q;cin>>q;
    while(q--){
        int a,b;cin>>a;
        if(a==0) cin>>b;
        if(a==0){
            pq.push(b);
            cout<<pq.top()<<endl;
        }
        else if(a==1){
            if(pq.empty()) cout<<"Empty"<<endl;
            else{
                if(!pq.empty()) cout<<pq.top()<<endl;
            }
        }
        else if(a==2){
            if(!pq.empty()) pq.pop();
            if(pq.empty()) cout<<"Empty"<<endl;
            else cout<<pq.top()<<endl;
        }
    }
    return 0;
}