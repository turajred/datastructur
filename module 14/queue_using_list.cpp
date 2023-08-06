#include<bits/stdc++.h>
using namespace std;
class myQueue{
    private:
        list<int> L;
    public:
        void push(int val){
           L.push_back(val);
        }
        void pop(){
            L.pop_front();
        }
        int front(){
            return  L.front();
        }
        int size(){
            return  L.size();
        }
        bool empty(){
           return L.empty();
        }
};
int main(){
    myQueue s;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    while(!s.empty()){
        cout<<s.front()<<endl;
        s.pop();
    }
    return 0;
}