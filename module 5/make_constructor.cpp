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
    Node a(10);
    Node b(20);
    a.next_node=&b;
    cout<<(*a.next_node).val;
    return 0;
}