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
void take_input(Node *&head,Node *&tail,int v){
    Node *newnode=new Node(v);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next_node=newnode;
    tail=newnode;
}
void print_r(Node *head){
    if(head==NULL) return;
    Node *tmp=head;
    cout<<tmp->val<<" ";
    print_r(tmp->next_node);
}
int main(){
    Node *head=NULL;
    Node *tail=NULL;
    while(true){
        int n;cin>>n;
        if(n==-1) break;
        take_input(head,tail,n);
    }
    for(Node *i=head;i->next_node!=NULL;i=i->next_node){
        for(Node *j=i->next_node;j!=NULL;j=j->next_node){
            if(i->val<j->val){
                swap(i->val,j->val);
            }
        }
    }
    print_r(head);
    return 0;
}