#include <bits/stdc++.h>
using namespace std;

class abc
{
    public:
    int x; 
    int *y;
    
    abc(int _x, int _y): x(_x), y(new int (_y)){}
    
    // default dumb shallow copy constructor
    // abc(const abc&obj)
    // {
    //     this->x = obj.x;
    //     this->y = obj.y;
    // }
    
    // smart deep copy constructor
    abc(const abc &obj)
    {
        this->x = obj.x;
        this->y = new int(*(obj.y));
    }
    
    void print()
    {
        printf("X = %d \nPTR Y = %p \nvalue of Y = %d\n",x,y,*y);
        cout<<endl;
    }
    
    ~abc()
    {
        delete y;
    }
};

int main()
{
    abc a(1,2);
    a.print();
    
    abc b(a);
    b.print();
    
    *b.y = 20;
    b.print();
    a.print();
    
    
    
    //destructor problem of shallow copy constructor
    abc *p = new abc(11,12);
    abc q = *p;
    delete p;
    
    q.print();
    

    return 0;
}