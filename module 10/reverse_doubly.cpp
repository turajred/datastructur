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
    tail=newnode;
}
void print(Node *head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next_node;
    }
}
void print_rev(Node *tail){
    Node *tmp=tail;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->prev;;
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
void reverse_double(Node *head,Node *tail){
    Node *i=head;
    Node *j=tail;
    while( i->next_node!=j &&i!=j){
        swap(i->val,j->val);
        i=i->next_node;
        j=j->prev;
    }
}
int main(){
    Node *head=NULL;
    Node *tail=NULL;
    while(true){
        int n;cin>>n;
        if(n==-1) break;
        take_input(head,tail,n);
    }
    // reverse(head,head);
    // cout<<endl;
    // print_rev(tail);
    reverse_double(head,tail);
    print(head);
    return 0;
}