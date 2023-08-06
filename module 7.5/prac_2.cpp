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
void print_reverse(Node *head){
    Node *tmp=head;
    if(head==NULL) return;
    print_reverse(tmp->next_node);
    cout<<tmp->val<<" ";
}
int main(){
    Node *head=NULL;
    Node *tail=NULL;
    while(true){
        int n;cin>>n;
        if(n==-1) break;
        take_input(head,tail,n);
    }
    print_reverse(head);
    return 0;
}