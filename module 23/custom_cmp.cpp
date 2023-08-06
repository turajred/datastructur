#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int marks;
        int roll;
        Student(string name,int marks,int roll){
            this->name=name;
            this->roll=roll;
            this->marks=marks;
        }
};
class cmp{
    public:
        bool operator()(Student a,Student b){
            if(a.marks < b.marks) return true;
            else if(a.marks>b.marks) return false;
            else if(a.marks==b.marks){
                if(a.roll<b.roll) return false;
                else return true;
            }
        }
};
int main(){
    int n;cin>>n;
    priority_queue<Student,vector<Student>,cmp>pq;
    while(n--){
        string name;
        int roll,marks;
        cin>>name>>marks>>roll;
        Student obj(name,marks,roll);
        pq.push(obj);
    }
    while(!pq.empty()){
        Student a=pq.top();
        cout<<a.name<<" "<<a.marks<<" "<<a.roll<<endl;
        pq.pop();
    }
    return 0;
}