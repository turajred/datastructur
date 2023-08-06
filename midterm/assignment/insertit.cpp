#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int n1;cin>>n1;
    vector<int>vc1(n1);
    for(int i=0;i<n1;i++) cin>>vc1[i];
    int n2;cin>>n2;
    vector<int>vc2(n2);
    for(int i=0;i<n2;i++) cin>>vc2[i];
    int ins;cin>>ins;
    vc1.insert(vc1.begin()+ins,vc2.begin(),vc2.end());
    for(int a:vc1) cout<<a<<" ";
    return 0;
}
