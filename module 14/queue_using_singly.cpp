#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next_node;
        Node(int val){
            this->val=val;
            this->next_node=NULL;
        }
};
class myQueue{
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
            tail=newnode;
        }
        void pop(){
            sz--;
            Node *delnode=head;
            head=head->next_node;
            if(head==NULL){
                tail=NULL;
                delete delnode;
                return;
            }
            delete delnode;
        }
        int front(){
            return  head->val;
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