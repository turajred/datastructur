#include<bits/stdc++.h>
using namespace std;
int main(){
    // list<int>myList={10,20,30,40};
    // for(auto it=myList.begin();it!=myList.end();it++){
    //     cout<<*it<<endl;
    // }
    vector<int>v={20,3450,320,348,034};
    list<int>myList(v.begin(),v.end());
    for(int val:myList){
        cout<<val<<" ";
    }
    myList.resize(3);
    cout<<endl;
    for(int val:myList){
        cout<<val<<" ";
    }
    return 0;
}