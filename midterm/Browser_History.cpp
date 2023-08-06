#include <bits/stdc++.h>

using namespace std;
class Node{
    public:
        string val;
        Node *next_node;
        Node *prev;
        Node(string val){
            this->val=val;
            this->next_node=NULL;
            this->prev=NULL;
        }
};
void take_input(Node *&head,Node *&tail,string val){
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
int main()
{
    // Write your code here
    Node *head=NULL;
    Node *tail=NULL;
    while(true){
        string s;cin>>s;
        if(s=="end") break;
        take_input(head,tail,s);
    }
    int q;cin>>q;
    Node *tmp=head;
    Node *tmp1=head;
    for(int i=1;i<=q+1;i++){
        string find;
        getline(cin,find);
        if(find[0]=='v'){
            string s1,wrd;
            stringstream ss;
            ss<<find;
            while(ss>>wrd){
                s1=wrd;
            }
            tmp1=tmp;
            tmp=head;
            while(tmp!=NULL){
                if(tmp->val==s1){
                    cout<<tmp->val<<endl;
                    break;
                }
                tmp=tmp->next_node;
            }
            if(tmp==NULL){
                cout<<"Not Available"<<endl;
                tmp=tmp1;
            }
        }
        else{
            if(find=="next"){
                if(tmp->next_node!=NULL){
                    tmp=tmp->next_node;
                    cout<<tmp->val<<endl;
                }
                else{
                    cout<<"Not Available"<<endl;
                }
            }
            else if(find=="prev"){
                if(tmp->prev!=NULL){
                    tmp=tmp->prev;
                    cout<<tmp->val<<endl;
                }
                else{
                    cout<<"Not Available"<<endl;
                }
            }
        }
    }
    return 0;
}
