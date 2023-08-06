#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int x;cin>>x;
    int l=0,r=n-1;
    bool flg=false;
    while(l<=r){
        int mid_index=(l+r)/2;
        if(v[mid_index]==x){
            flg=true;
            break;
        }
        if(v[mid_index]>x){
            l=mid_index+1;
        }
        else if(v[mid_index]<x){
            r=mid_index-1;
        }
    }
    if(flg==true) cout<<"FOUND";
    else cout<<"NOT FOUND";
    return 0;
}