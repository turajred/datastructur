#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        map<int,int>mp;
        int n;cin>>n;
        int maxi=0;
        int a=INT_MIN;
        while(n--){
            int x;cin>>x;
            mp[x]++;
            if(mp[x]>maxi){
                maxi=mp[x];
                a=x;
            }
            else if(mp[x]==maxi){
                if(x>a){
                    maxi=mp[x];
                    a=x;
                }
            }
        }
        cout<<a<<" "<<mp[a]<<endl;
        
    }
    return 0;
}