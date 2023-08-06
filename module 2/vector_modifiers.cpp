#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v;
    // for(int i=0;i<4;i++){
    //     cin>>v[i];
    // }
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    replace(v.begin(),v.end(),3,5);
    vector<int>::iterator it;
    it=find(v.begin(),v.end(),5);
    if(it!=v.end()) cout<<"found"<<endl;
    else cout<<"not found"<<endl;
    for(int c:v){
        cout<<c<<endl;
    }
    return 0;
}