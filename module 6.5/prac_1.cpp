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
};\
void take_input(Node *&head,int v){
    Node *newnode=new Node(v);
    if(head==NULL){
        head=newnode;
        return;
    }
    Node *tmp=head;
    while(tmp->next_node!=NULL){
        tmp=tmp->next_node;
    }
    tmp->next_node=newnode;
}
void print_link(Node *head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next_node;
    }
}
int main(){
    int count=0;
    Node *head=NULL;
    while(true){
        int n;
        cin>>n;
        if(n==-1) break;
        take_input(head,n);
        count++;
    }
    cout<<count;
    return 0;
}