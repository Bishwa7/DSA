#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int id;
    int age;
    string name;
    int subject;
    float *gpa;
    
    
    
    // Default constructor
    // Student()
    // {
    //     cout<<"Default Constructor called"<<endl;
    // }
    
    // Parameterized Constructor
    Student(int id, int age, string name, int subject, float gpa)
    {
        this->id = id;
        this->age = age;
        this->name = name;
        this->subject = subject;
        this->gpa = new float(gpa);
        
        cout<< this->name <<" Parameterized Constructor called"<<endl;
    }
    
    // Copy Constructor
    Student(const Student &srcobj)
    {
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->subject = srcobj.subject;
        this->gpa = new float(*(srcobj.gpa));
        
        
        cout<< this->name <<" Copy Constructor called"<<endl;
    }
    
    
    // Methods
    void study()
    {
        cout<< this->name <<" Studying" <<endl;
    }
    
    void bunk()
    {
        cout<< this->name <<" Bunking" <<endl;
    }
    
    
    
    // Destructor
    ~Student()
    {
        cout<< this->name <<" Default Destructor called" <<endl;
        delete this->gpa;
    }
};



int main()
{
    // Student A;
    // A.id = 1;
    // A.age = 18;
    // A.name = "Rahul";
    // A.subject = 5;
    
    // cout<<A.name<<" "<<A.age<<endl;
    // A.study();
    
    Student A(1, 18, "Ronaldo", 7, 9.1);
    Student B(2, 19, "Rahul", 5, 8.2);
    
    cout<<A.name<<" "<<A.age<<endl;
    cout<<B.name<<" "<<B.age<<endl;
    A.bunk();
    B.study();
    
    cout<<endl;
    
    Student C(A);
    cout<<C.name<<" "<<A.name<<endl;
    
    cout<<endl;
    
    Student *D = new Student(3,20,"Luffy",6, 9.8);
    cout<<D->name<<" "<<D->age<<endl;
    D->study();
    cout<<"D's GPA = "<<*(D->gpa)<<endl;
    delete D;
    
    
    
    return 0;
}