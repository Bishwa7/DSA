#if !defined(BIRD_H)
#define BIRD_H

#include <bits/stdc++.h>
using namespace std;

class bird
{
    public:
    virtual void eat() = 0;
    virtual void fly() = 0;
};

class sparrow : public bird
{
    private:
    
    void eat()
    {
        cout<<"Sparrow is eating"<<endl;
    }
    
    void fly()
    {
        cout<<"Sparrow is flying"<<endl;
    }
};


class eagle : public bird
{
    private:
    
    void eat()
    {
        cout<<"Eagle is eating"<<endl;
    }
    
    void fly()
    {
        cout<<"Eagle is flying"<<endl;
    }
};



#endif