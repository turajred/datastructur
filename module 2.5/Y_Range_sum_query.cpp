#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,s;cin>>n>>s;
    long long ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    vector<long long>prf(n);
    prf[0]=ar[0];
    for(int i=1;i<prf.size();i++){
        prf[i]=ar[i]+prf[i-1];
    }
    while(s--){
        long long l,r;cin>>l>>r;
        l--;
        r--;
        if(l==0) cout<<prf[r]<<endl;
        else cout<<prf[r]-prf[l-1]<<endl;
    }
    return 0;
}