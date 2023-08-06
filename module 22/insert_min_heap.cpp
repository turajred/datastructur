#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    int cur_id=v.size()-1;
    while(cur_id!=0){
        int parent_id=(cur_id-1)/2;
        if(v[cur_id]<v[parent_id]) swap(v[cur_id],v[parent_id]);
        cur_id=parent_id;
    }
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}