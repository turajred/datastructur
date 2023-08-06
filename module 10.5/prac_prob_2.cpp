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
void reverse(Node *head,Node *tail){
    Node *i=head;
    Node *j=tail;
    while(true){
        swap(i->val,j->val);
        if(i==j||i->next_node==j) break;
        i=i->next_node;
        j=j->prev;
    }
}
void print(Node *head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next_node;
    }
}
int link_size(Node *head){
    Node *tmp=head;
    int cnt=0;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next_node;
    }
    return cnt;
}
int main(){
    Node *head=NULL;
    Node *tail=NULL;
    while(true){
        int n;cin>>n;
        if(n==-1) break;
        take_input(head,tail,n);
    }
    reverse(head,tail);
    print(head);
    return 0;
}