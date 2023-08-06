#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> &v,int x){
    v.push_back(x);
    int cur_idx=v.size()-1;
    while(cur_idx!=0){
        int parent_idx=(cur_idx-1)/2;
        if(v[cur_idx]>v[parent_idx]) swap(v[cur_idx],v[parent_idx]);
        cur_idx=parent_idx;
    }
}
void delete_heap(vector<int> &v,int n){
    v[0]=v[n-1];
    v.pop_back();
    int cur_idx=0;
    while(true){
        int l=(cur_idx*2)+1;
        int r=(cur_idx*2)+2;
        int lst=v.size()-1;
        if(l>lst && r>lst) break;
        if(v[l]>=v[cur_idx] && v[r]>=v[cur_idx]){
            if(v[l]>=v[cur_idx] && v[l]>=v[r]){
                swap(v[cur_idx],v[l]);
                cur_idx=l;
            }
            else{
                swap(v[cur_idx],v[r]);
                cur_idx=r;
            }
        }
        else if(v[l]>=v[cur_idx]){
            swap(v[cur_idx],v[l]);
            cur_idx=l;
        }
        else{
            swap(v[cur_idx],v[r]);
            cur_idx=r;
        }

}
}
int main(){
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        insert(v,x);
    }
    for(int c:v) cout<<c<<" ";
    delete_heap(v,n);
    cout<<endl;
    for(int c:v) cout<<c<<" ";
    delete_heap(v,n);
    cout<<endl;
    for(int c:v) cout<<c<<" ";
    delete_heap(v,n);
    cout<<endl;
    for(int c:v) cout<<c<<" ";
    delete_heap(v,n);
    cout<<endl;
    for(int c:v) cout<<c<<" ";
    delete_heap(v,n);
    cout<<endl;
    for(int c:v) cout<<c<<" ";
    delete_heap(v,n);
    cout<<endl;
    for(int c:v) cout<<c<<" ";
    return 0;
}