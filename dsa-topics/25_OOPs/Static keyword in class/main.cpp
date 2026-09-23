#include <bits/stdc++.h>
using namespace std;

class abc
{
    public:
    
    static int x,y;
    
    static void print()
    {
        // x and y are static data members
        cout<<x<<" "<<y<<endl;      // only static data members can be used inside a static member function
    }
};
// static data members are initialized  outside the class defination
int abc::x;
int abc::y;


int main()
{
    abc obj1;
    obj1.x = 1;     // abc::x = 1;
    obj1.y = 2;     // abc::y = 2;
    obj1.print();   // abc::print();
    
    
    abc obj2;
    obj2.x = 10;    // abc::x = 10;
    obj2.y = 20;    // abc::y = 20;
    
    obj2.print();   // abc::print();
    obj1.print();   // abc::print();
    
    
    
    
    
    return 0;
}