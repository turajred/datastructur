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
    Node *head=new Node(10);
    Node *a=new Node(20);
    Node *b=new Node(30);
    Node *tail=new Node(40);
    head->next_node=a;
    a->next_node=b;
    b->next_node=tail;
    tail->next_node=b;
    // while(true){
    //     int n;cin>>n;
    //     if(n==-1) break;
    //     take_input(head,tail,n);
    // }
    //reverse(head,head);
    Node *slow=head;
    Node *fast=head;
    bool flag=false;
    while(true){
        if(slow==fast){
            flag=true;
            break;
        }
        slow=slow->next_node;
        fast=fast->next_node->next_node;
    }
    if(flag==true) cout<<"FOUND"<<endl;
    else cout<<"NOT FOUND"<<endl;
    print(head);
    return 0;
}