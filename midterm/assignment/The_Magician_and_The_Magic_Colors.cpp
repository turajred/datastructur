#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        stack<char> st;
        stack<char> result;
        
        int n;cin>>n;
        string s;cin>>s;
        for(char a:s){
            if(st.empty()){
                st.push(a);
            }
            else if(a==st.top()){
                st.pop();
            }
            else if((a=='R'&&st.top()=='G')||(a=='G'&&st.top()=='R')){
                st.pop();
                if(result.empty()) result.push('Y');
                else if(result.top()=='Y'){
                    result.pop();
                }
                else{
                    result.push('Y');
                }
            }
            else if((a=='R'&&st.top()=='B')||(a=='B'&&st.top()=='R')){
                st.pop();
                if(result.empty()) result.push('P');
                else if(result.top()=='P'){
                    result.pop();
                }
                else{
                    result.push('P');
                }
            }
            else if((a=='B'&&st.top()=='G')||(a=='G'&&st.top()=='B')){
                st.pop();
                if(result.empty()) result.push('C');
                else if(result.top()=='C'){
                    result.pop();
                }
                else{
                    result.push('C');
                }
            }
        }
        while(!st.empty()){
            result.push(st.top());
            st.pop();
        }
        while(!result.empty()){
                
                st.push(result.top());
                result.pop();
        }
        while(!st.empty()){
                
                cout<<st.top();
                st.pop();
        }
       
        cout<<endl;
    }
    return 0;
}