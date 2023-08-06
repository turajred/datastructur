#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        stack<char>st;
        for(char a:s){
            if(st.empty()){
                st.push(a);
            }
            else if(st.top()==a){
                st.push(a);
            }
            else{
                st.pop();
            }
        }
        if(st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
