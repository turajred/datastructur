#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int marks;
        int roll;
        Student(string name,int roll,int marks){
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
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        pq.push(obj);
    }
    int q;cin>>q;
    while(q--){
        int a;cin>>a;
        if(a==0){
            string name;
            int marks,roll;
            cin>>name>>roll>>marks;
            Student obj(name,roll,marks);
            pq.push(obj);
            Student x=pq.top();
            cout<<x.name<<" "<<x.roll<<" "<<x.marks<<endl;
        }
        else if(a==1){
            if(pq.empty()) cout<<"Empty"<<endl;
            else{
                if(!pq.empty()){
                    Student x=pq.top();
                    cout<<x.name<<" "<<x.roll<<" "<<x.marks<<endl;
                }
            }
        }
        else if(a==2){
            if(!pq.empty()) pq.pop();
            if(pq.empty()) cout<<"Empty"<<endl;
            else{
                Student x=pq.top();
                cout<<x.name<<" "<<x.roll<<" "<<x.marks<<endl;
            }
        }
    }
    return 0;
}