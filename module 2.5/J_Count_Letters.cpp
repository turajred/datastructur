#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    vector<int>v(26,0);
    for(int i=0;i<s.size();i++){
        int x=s[i]-'a';
        v[x]++;
    }
    for(int i=0;i<v.size();i++){
        if(v[i]!=0){
            char a=i+97;
            cout<<a<<" "<<":"<<" "<<v[i]<<endl;
        }
    }
    return 0;
}