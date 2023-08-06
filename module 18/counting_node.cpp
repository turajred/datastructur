#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *right;
        Node *left;
        Node(int val){
            this->val=val;
            this->right=NULL;
            this->left=NULL;
        }
};
int count_node(Node *root){
    if(root==NULL) return 0;
    int l=count_node(root->left);
    int r=count_node(root->right);

    return l+r+1;
}
Node* take_input(){
    int x;cin>>x;
    Node *root;
    queue<Node*>q;
    if(x==-1) root=NULL;
    else root=new Node(x);

    if(root) q.push(root);
    
    while(!q.empty()){
        // ber kore ana
        Node *p=q.front();
        q.pop();
        // jabotiyo sob kaj
        int l,r;
        cin>>l>>r;
        Node *leftie;
        Node *rightie;

        if(l==-1) leftie=NULL;
        else leftie=new Node(l);

        if(r==-1) rightie=NULL;
        else rightie=new Node(r);

        p->left=leftie;
        p->right=rightie;
        // children push kora
        if(p->right) q.push(p->right);
        if(p->left) q.push(p->left);
    }
    return root;
}
int main(){
    Node *root=take_input();
    int x=count_node(root);
    return 0;
}