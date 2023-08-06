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
int main(){
    Node *root=new Node(10);
    Node *a=new Node(20);
    Node *b=new Node(30);
    Node *c=new Node(40);
    Node *d=new Node(50);
    Node *e=new Node(60);
    Node *f=new Node(70);
    Node *g=new Node(80);
    Node *h=new Node(90);
    Node *i=new Node(100);

    root->left=a;
    root->right=b;
    a->left=c;
    a->right=h;
    c->right=e;
    h->right=i;
    b->right=d;
    d->left=f;
    d->right=g;

    level_order(root);
    return 0;
}