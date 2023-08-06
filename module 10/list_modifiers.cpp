#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>mylist={3485,456,467,456,2,2,2};
    // vector<int>v={100,200,399};
    // // mylist.pop_front();
    // // mylist.push_back(10);
    // // for(int val:mylist){
    // //     cout<<val<<" ";
    // // }
    // mylist.insert(next(mylist.begin(),2),v.begin(),v.end());
    // // mylist.erase(next(mylist.begin(),1),next(mylist.begin(),4));
    // replace(mylist.begin(),mylist.end(),2,30);
    // for(int val:mylist){
    //     cout<<val<<" ";
    // }
    // // mylist.remove(30);
    // // cout<<endl;
    // // for(int val:mylist){
    // //     cout<<val<<" ";
    // // }
    // cout<<endl;
    // mylist.sort(greater<int>());
    //  for(int val:mylist){
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // mylist.unique();
    //  for(int val:mylist){
    //     cout<<val<<" ";
    // }
    auto it=find(mylist.begin(),mylist.end(),55);
    cout<<*it<<endl;
    return 0;
}