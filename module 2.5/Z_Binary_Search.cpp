#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;cin>>n>>q;
    int v[n];
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v,v+n);
    while(q--){
        int x;
        cin>>x;
        int l=0,r=n-1;
        bool flg=false;
        while(l<=r){
            int mid=(l+r)/2;
            if(v[mid]==x){
                flg=true;
                break;
            }

            if(x>v[mid]){
                l=mid+1;
            }
            else if(x<v[mid]){
                r=mid-1;
            }
        }
        if(flg==true) cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }
    return 0;
}