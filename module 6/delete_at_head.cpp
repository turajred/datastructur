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
void insert_tail(Node *&head,int v){
    Node *newnode=new Node(v);
    if(head==NULL){
        head=newnode;return;
    }
    Node *tmp=head;
    while(tmp->next_node!=NULL){
        tmp=tmp->next_node;
    }
    tmp->next_node=newnode;
}
void insert_any(Node *head,int v,int pos){
    if(pos==0){
        cout<<endl;
        cout<<"Not Valid in this Option try Option 4"<<endl<<endl;
        return;
    }
    Node *newnode=new Node(v);
    Node *tmp=head;
    for(int i=0;i<pos-1;i++){
        tmp=tmp->next_node;
        if(tmp==NULL){
            cout<<endl<<"Invalid"<<endl<<endl;
            return;
        }
    }
    newnode->next_node=tmp->next_node;
    tmp->next_node=newnode;
    cout<<endl;
    cout<<"Inserted at "<<pos<<endl;
}
void insert_head(Node *&head,int v){
    Node *newnode=new Node(v);
    newnode->next_node=head;
    head=newnode;
    cout<<endl;
    cout<<"Inserted at head"<<endl<<endl;
}
void delete_any(Node *head,int pos){
    if(pos==0){
        cout<<endl<<"Not valid Try Option 6"<<endl<<endl;
        return;
    }
    Node *tmp=head;
    for(int i=0;i<pos-1;i++){
        tmp=tmp->next_node;
        if(tmp==NULL){
            cout<<endl<<"Invalid"<<endl<<endl;
            return;
        }
    }
    if(tmp->next_node==NULL){
            cout<<endl<<"Invalid"<<endl<<endl;
            return;
        }
    Node *delnode=tmp->next_node;
    tmp->next_node=tmp->next_node->next_node;
    delete delnode;
}
void delete_head(Node* &head){
    if(head==NULL){
        cout<<endl<<"Invalid"<<endl<<endl;
        return;
    }
    Node *delnode=head;
    head=head->next_node;
    delete delnode;
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
    while(true){
        cout<<"Option 1:Insert New"<<endl;
        cout<<"Option 2:Print list"<<endl;
        cout<<"Option 3:Insert at any position"<<endl;
        cout<<"Option 4:Insert at head"<<endl;
        cout<<"Option 5:Delete at any position"<<endl;
        cout<<"Option 6:Delete at head"<<endl;
        cout<<"Option 7:Terminate"<<endl;
        int op;cin>>op;
        if(op==1){
            cout<<"Enter a value: ";
            int va;cin>>va;
            insert_tail(head,va);
        }
        else if(op==2){
            cout<<endl;
            cout<<"Your linked list is: ";
            print_link(head);
            cout<<endl<<endl;
        }
        else if(op==3){
            cout<<endl;
            int pos,val;
            cout<<"Enter Postion: ";
            cin>>pos;
            cout<<"Enter Value: ";
            cin>>val;
            insert_any(head,val,pos);
            
        }
        else if(op==4){
            int val;
            cout<<"Enter Value:";
            cin>>val;
            insert_head(head,val);
        }
        else if(op==5){
            int pos;
            cout<<"Enter Postion: ";
            cin>>pos;
            delete_any(head,pos);
        }
        else if(op==6){
            delete_head(head);
        }
        else if(op==7){
            break;
        }
    }

    return 0;
}