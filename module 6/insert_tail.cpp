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
void insert_tail(Node *&head,int v){
    Node *newnode=new Node(v);
    if(head==NULL){
        head=newnode;return;
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
    Node *head=NULL;
    while(true){
        cout<<"Option 1:Insert New"<<endl;
        cout<<"Option 2:Print list"<<endl;
        cout<<"Option 3:Terminate"<<endl;
        int op;cin>>op;
        if(op==1){
            cout<<"Enter a value: ";
            int va;cin>>va;
            insert_tail(head,va);
        }
        else if(op==2){
            cout<<endl;
            cout<<"Your linked list is: ";
            print_link(head);
            cout<<endl<<endl;
        }
        else if(op==3){
            break;
        }
    }

    return 0;
}