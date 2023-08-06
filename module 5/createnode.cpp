#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next_node;
};
int main(){
    Node a,b;
    a.val=10;
    b.val=20;
    a.next_node=&b;
    return 0;
}