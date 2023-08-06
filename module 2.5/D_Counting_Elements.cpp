#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int cnt=0;
    for(int i=0;i<v.size();i++){
        int x=v[i]+1;
        for(int i=0;i<n;i++){
            if(v[i]==x){
                cnt++;
                break;
            }
        }
    }
    cout<<cnt;
    return 0;
}