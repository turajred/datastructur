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
void level_order(Node *root){
    if(root==NULL){
        cout<<"Tree Empty";
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node *p=q.front();
        q.pop();

        cout<<p->val<<" ";

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
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
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
bool search(Node *root,int x){
    if(root==NULL) return false;
    if(root->val==x) return true;
    if(x<root->val){
        return search(root->left,x);
    }
    else {
        return search(root->right,x);
    }
}
int main(){
    Node *root=take_input();
    int m;cin>>m;
    bool flg=search(root,m);
    if(flg) cout<<"Found";
    else cout<<"Not Found";
    return 0;
}