#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v(n+n);
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int ar2[n];
    for(int i=0;i<n;i++){
        cin>>ar2[i];
    }
    for(int i=0;i<n;i++){
        v[i]=ar2[i];
    }
    for(int i=0;i<n;i++){
        v[i+n]=ar[i];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}