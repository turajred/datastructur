#include<bits/stdc++.h>
using namespace std;
class myStack{
    private:
        list<int>myList;
    public:
        void push(int val){
            myList.push_back(val);
        }
        void pop(){
            myList.pop_back();
        }
        int top(){
            return  myList.back();
        }
        int size(){
            return  myList.size();
        }
        bool empty(){
            return myList.empty();
        }
};
int main(){
    myStack s;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}