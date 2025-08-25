#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    int marks;
    string name;
    Student(){
        
    }
    Student(int m, string n){
        this->marks = m;
        this->name = n;
    }
};

class Comparator{
    public:
    bool operator()(Student a, Student b){
        return a.marks > b.marks;
    }
};

int main()
{
    //cout<<"Hello World";
    
    priority_queue<Student, vector<Student>, Comparator> pq;
    
    pq.push(Student(90,"Jack"));
    pq.push(Student(80,"John"));
    pq.push(Student(95,"Tristan"));
    
    cout<<pq.top().marks<<" "<<pq.top().name<<endl;
    pq.pop();
    cout<<pq.top().marks<<" "<<pq.top().name<<endl;
    pq.pop();
    cout<<pq.top().marks<<" "<<pq.top().name<<endl;

    return 0;
}