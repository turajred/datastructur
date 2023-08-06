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
void take_input(Node *&head,int v){
    Node *newnode=new Node(v);
    if(head==NULL){
        head=newnode;
        return;
    }
    Node *tmp=head;
    while(tmp->next_node!=NULL){
        tmp=tmp->next_node;
    }
    tmp->next_node=newnode;
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
int main(){
    Node *head=NULL;
    while(true){
        int n;cin>>n;
        if(n==-1) break;
        take_input(head,n);
    }
    int x=link_size(head),flag=0;
    Node *tmp1=head;
    while(tmp1!=NULL){
        Node *tmp=tmp1->next_node;
        while(tmp!=NULL){
            if(tmp1->val==tmp->val){
                flag=1;
            }
            tmp=tmp->next_node;
        }
        tmp1=tmp1->next_node;
    }
    if(flag==0) cout<<"NO";
    else cout<<"YES";
    return 0;
}