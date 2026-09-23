#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int id;
    int age;
    string name;
    int subject;
    
    private:
    float *gpa;
    string gf;
    int roll;
    
    
    
    // Default constructor
    // Student()
    // {
    //     cout<<"Default Constructor called"<<endl;
    // }
    
    // Parameterized Constructor
    public:
    Student(int id, int age, string name, int subject, float gpa, string gf, int roll)
    {
        this->id = id;
        this->age = age;
        this->name = name;
        this->subject = subject;
        this->gpa = new float(gpa);
        this->gf = gf;
        this->roll = roll;
        
        
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
        this->gf = srcobj.gf;
        this->roll = srcobj.roll;
        
        
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
    
    
    void setGpa(float a)
    {
        *this->gpa = a;
    }
    float getGpa()const
    {
        return *this->gpa;
    }
    
    string getGf()const
    {
        return this->gf;
    }
    
    
    private:
    void gfChatting()
    {
        cout<< this->name <<" chatting with gf"<<endl;
    }
};



int main()
{
    Student A(1,18,"Ronaldo", 5, 8.5, "Gio", 7);
    
    //A.roll = 9;   // error because private
    //cout<<A.roll<<endl;   // error because private
    
    cout<<A.age<<endl;
    
    cout<<"Gpa of A = "<<A.getGpa()<<endl;
    A.setGpa(7.5);
    cout<<"Gpa of A = "<<A.getGpa()<<endl;
    
    cout<<"Gf of A = "<<A.getGf()<<endl;

    
    return 0;
}