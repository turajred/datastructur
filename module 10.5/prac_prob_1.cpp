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
    Node *head1=NULL;
    Node *tail1=NULL;
    while(true){
        int n;cin>>n;
        if(n==-1) break;
        take_input(head1,tail1,n);
    }
    bool flag=true;
    Node *tmp=head;
    Node *tmp1=head1;
    int x=link_size(head),y=link_size(head1);

    if(x==y){
        while(tmp!=NULL&&tmp1!=NULL){
            if(tmp->val!=tmp1->val) flag=false;
            tmp=tmp->next_node;
            tmp1=tmp1->next_node;
        }
    }
    else{
        flag=false;
    }
    if(flag==false) cout<<"NO";
    else cout<<"YES";
    return 0;
}