#include<bits/stdc++.h>
using namespace std;
class myStack{
    public:
        list<int> l;
        void push(int val){
            l.push_back(val);
        }
        void pop(){
            l.pop_back();
        }
        int top(){
            return l.back();
        }
        int size(){
            return l.size();
        }
        bool empty(){
            return l.empty();
        }
};
int main(){
    myStack s,s1;
    int n1;cin>>n1;
    for(int i=0;i<n1;i++){
        int x;cin>>x;
        s.push(x);
    }
    int n2;cin>>n2;
    for(int i=0;i<n2;i++){
        int x;cin>>x;
        s1.push(x);
    }
    bool flag=true;
    while(s.empty()!=true &&s1.empty()!=true){
        int x=s.top(),y=s1.top();
        if(x!=y){
            flag=false;
            break;
        }
        s.pop();
        s1.pop();
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}