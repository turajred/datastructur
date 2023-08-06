#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<v[0]<<" "<<v[3];
    return 0;
}