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
Node *convert(vector<int>ar,int l,int r){
    if(l>r) return NULL;
    int mid=(l+r)/2;
    Node *root=new Node(ar[mid]);
    Node *l1=convert(ar,l,mid-1);
    Node *r1=convert(ar,mid+1,r);
    root->left=l1;
    root->right=r1;
    return root;
}
int main(){
    int n;cin>>n;
    vector<int>ar;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    Node *root=convert(ar,0,n-1);
    level_order(root);
    return 0;
}