#include <iostream>
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


class Studentcomparator{
    public:
    bool operator()(Student a, Student b){
        return a.marks<b.marks;
    }
};

int main()
{
    //cout<<"Hello World";
    
    
    Student s1;
    Student s2;
    
    s1.marks=93;
    s1.name="Jack";
    
    s2.marks=90;
    s2.name="Tristan";
    
    
    Studentcomparator cmp;
    
    
    if(cmp(s1,s2))
    {
        cout<<"Jack has less marks than Tristan";
    }
    else
    {
        cout<<"Tristan has less marks then Jack";
    }
    
    

    return 0;
}