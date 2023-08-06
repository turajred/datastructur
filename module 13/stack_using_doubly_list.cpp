#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next_node;
        Node *prev;
        Node(int val){
            this->val=val;
            this->next_node=NULL;
            this->prev=NULL;
        }
};
class myStack{
    private:
        Node *head=NULL;
        Node *tail=NULL;
        int sz=0;
    public:
        void push(int val){
            sz++;
            Node *newnode=new Node(val);
            if(head==NULL){
                head=newnode;
                tail=newnode;
                return;
            }
            tail->next_node=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        void pop(){
            sz--;
            Node *delnode=tail;
            tail=tail->prev;
            delete delnode;
            if(tail==NULL) head=NULL;
        }
        int top(){
            return  tail->val;
        }
        int size(){
            return  sz;
        }
        bool empty(){
            if(sz==0) return true;
            else return false;
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