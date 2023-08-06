#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int n;cin>>n;
    vector<int>vc(n);
    for(int i=0;i<n;i++) cin>>vc[i];
    int flag=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(vc[i]==vc[j]){
                flag=1;
            }
        }
    }
    if(flag==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}
