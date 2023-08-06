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
int link_size(Node *head){
    Node *tmp=head;
    int count=0;
    while(tmp!=NULL){
        tmp=tmp->next_node;
        count++;
    }
    return count;
}
void insert(Node *head,int pos,int val){
    Node *newnode=new Node(val);
    Node *tmp=head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next_node;
    }
    newnode->next_node=tmp->next_node;
    tmp->next_node=newnode;
}
void insert_head(Node *&head,int val){
    Node *newnode=new Node(val);
    newnode->next_node=head;
    head=newnode;
}
void insert_tail(Node *&tail,int val){
    Node *newnode=new Node(val);
    tail->next_node=newnode;
    tail=newnode;
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
    Node *tail=NULL;
    while(true){
        int n;cin>>n;
        if(n==-1) break;
        take_input(head,tail,n);
    }
    int q;cin>>q;
    int x=link_size(head);
    while(q--){
        int val,pos;
        cin>>pos>>val;
        if(pos>x){
            cout<<"Invalid"<<endl;
        }
        else if(pos==0){
            insert_head(head,val);
            print_link(head);
            cout<<endl;
        }
        else if(pos==x){
            insert_tail(tail,val);
            print_link(head);
            cout<<endl;
        }
        else{
            insert(head,pos,val);
            print_link(head);
            cout<<endl;
        }
        x=link_size(head);
    }
    return 0;
}