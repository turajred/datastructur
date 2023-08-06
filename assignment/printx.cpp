#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int n;cin>>n;
    int a=(n+1)/2;
    int f1=1,b1=n,f2=a-1,b2=a+1;
    if(n==1) cout<<"X";
    else{
        for(int i=1;i<=n;i++){
            if(i<a){
                for(int j=1;j<=n;j++){
                    if(j==f1) cout<<"\\";
                    else if(j==b1) cout<<"/";
                    else cout<<" ";
                }
                f1++;
                b1--;
            }
            else if(i==a){
                for(int j=1;j<=n;j++){
                    if(j==a) cout<<"X";
                    else cout<<" ";
                }
            }
            else {
                for(int j=1;j<=n;j++){
                    if(j==f2) cout<<"/";
                    else if(j==b2) cout<<"\\";
                    else cout<<" ";
                }
                f2--;
                b2++;
            }
            cout<<endl;
        }
    }
    return 0;
}
