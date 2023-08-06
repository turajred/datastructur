#include <bits/stdc++.h> 
using namespace std;

template <typename T>
class BinaryTreeNode {
    public:
    T val;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
vector<int>v;
void levelOrder(BinaryTreeNode<int> *root){
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    while(!q.empty()){
        BinaryTreeNode<int> *p=q.front();
        if(!q.empty())q.pop();

        v.push_back(root->val);

        if(root->left) q.push(root->left);
        if(root->right) q.push(root->right);
    }
}
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    v.clear();
    levelOrder(root);
    return v;
}
BinaryTreeNode<int> * take_input(){
    int x;cin>>x;
    BinaryTreeNode<int> *root;
    queue<BinaryTreeNode<int> *>q;
    if(x==-1) root=NULL;
    else root=new BinaryTreeNode<int>(x);

    if(root) q.push(root);
    
    while(!q.empty()){
        // ber kore ana
        BinaryTreeNode<int> *p=q.front();
        q.pop();
        // jabotiyo sob kaj
        int l,r;
        cin>>l>>r;
        BinaryTreeNode<int> *leftie;
        BinaryTreeNode<int> *rightie;

        if(l==-1) leftie=NULL;
        else leftie=new BinaryTreeNode<int>(l);

        if(r==-1) rightie=NULL;
        else rightie=new BinaryTreeNode<int>(r);

        p->left=leftie;
        p->right=rightie;
        // children push kora
        if(p->right) q.push(p->right);
        if(p->left) q.push(p->left);
    }
    return root;
}
int main(){
    int t;cin>>t;
    while(t--){
        BinaryTreeNode<int> *p=take_input();
        getLevelOrder(p);

    }
    return 0;
}