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
int main(){
    Node *head=new Node(10);
    Node *a=new Node(20);
    Node *b=new Node(30);
    head->next_node=a;
    a->next_node=b;
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next_node;
    }
    return 0;
}