#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>mp;
    int n;cin>>n;
    while(n--){
        string a;
        int b;
        cin>>a>>b;
        mp.insert({a,b});
    }
    // for(auto it=mp.begin();it!=mp.end();it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    string word;cin>>word;
    if(mp.count(word)==0) cout<<"Not Found";
    else cout<<"Found";
    return 0;
}