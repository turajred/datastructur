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
void take_input(Node *&head,Node *&tail,int val){
    Node *newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next_node=newnode;
    newnode->prev=tail;
    tail=tail->next_node;
}
void print_norm(Node *head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next_node;
    }
}
void insert(Node *head,int pos,int val){
    Node *newnode=new Node(val);
    Node *tmp=head;
    for(int i=0;i<pos-1;i++){
        tmp=tmp->next_node;
    }
    newnode->next_node=tmp->next_node;
    tmp->next_node->prev=newnode;
    tmp->next_node=newnode;
    newnode->prev=tmp;
}
void print_rev(Node *tail){
    Node *tmp=tail;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
}
int link_size(Node *head){
    Node *tmp=head;
    int count=0;
    while(tmp!=NULL){
        tmp=tmp->next_node;
        count++;
    }
    return count;
}
void insert_head(Node *&head,int val){
    Node *newnode=new Node(val);
    newnode->next_node=head;
    head->prev=newnode;
    head=newnode;
}
void insert_tail(Node *&head,Node *&tail,int val){
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
void delete_at_postion(Node *head,int pos){
    Node *tmp=head;
    for(int i=0;i<pos-1;i++){
        tmp=tmp->next_node;
    }
    Node *delnode=tmp->next_node;
    tmp->next_node=tmp->next_node->next_node;
    tmp->next_node->prev=tmp;
    delete delnode;
}
void delete_tail(Node *&tail){
    Node *delnode=tail;
    tail->prev->next_node=NULL;
    tail=tail->prev;
    delete delnode;
}
void delete_head(Node *&head){
    Node *delnode=head;
    head->next_node->prev=NULL;
    head=head->next_node;
    delete delnode;
}
int main(){
    Node *head=NULL;
    Node *tail=NULL;
    while(true){
        int val;cin>>val;
        if(val==-1) break;
        take_input(head,tail,val);
    }
    int x;cin>>x;
    delete_head(head);
    print_norm(head);
    cout<<endl;
    print_rev(tail);
    return 0;
}