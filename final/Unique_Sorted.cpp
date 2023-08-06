#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        set<int> s;
        while(n--){
            int a;cin>>a;
            s.insert(a);
        }
        vector<int>v;
        for(auto it=s.begin();it!=s.end();it++){
            v.push_back(*it);
        }
        reverse(v.begin(),v.end());
        for(int x:v) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
