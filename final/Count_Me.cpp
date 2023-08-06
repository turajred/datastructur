#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    cin.ignore();
    while(n--){
        map<string,int>mp;
        string s;
        getline(cin,s);
        int maxi=INT_MIN;
        string ans,word;
        stringstream ss(s);
        while(ss>>word){
            mp[word]++;
            if(mp[word]>maxi){
                maxi=mp[word];
                ans=word;
            }
            else if(mp[word]==maxi){
                NULL;
            }
        }
        cout<<ans<<" "<<mp[ans];
        cout<<endl;
    }
    return 0;
}