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
void take_input(Node *&head,Node *&tail,int val){
    Node *newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next_node=newnode;
    newnode->next_node=NULL;
    tail=newnode;
}
void print(Node *head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next_node;
    }
}
void reverse(Node *&head,Node *tmp){
    if(tmp->next_node==NULL){
        head=tmp;
        return;
    }
    reverse(head,tmp->next_node);
    tmp->next_node->next_node=tmp;
    tmp->next_node=NULL;
}
int main(){
    Node *head=NULL;
    Node *tail=NULL;
    while(true){
        int n;cin>>n;
        if(n==-1) break;
        take_input(head,tail,n);
    }
    reverse(head,head);
    print(head);
    return 0;
}