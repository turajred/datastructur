#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    // for(int i=1;i<=n;i=i*2){
    //     cout<<i<<endl;
    // }
    // for(int i=n;i>0;i=i/2){
    //     cout<<i<<endl;
    // }
    while(n>0){
        int i=n%10;
        cout<<i<<endl;
        n/=10;
    }
    return 0;
}