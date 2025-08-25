#include <bits/stdc++.h>
using namespace std;

class A
{
    int x;
    
    public:
    A(int _val): x(_val){}
    
    friend class B;
    friend void print1(const A&);
    
};

class B
{
    public:
    void print(const A&a)
    {
        cout<<a.x<<endl;
    }
};

void print1(const A&a)
{
    cout<<a.x<<endl;
}

int main()
{
    A a(5);
    
    B b;
    b.print(a);
    
    print1(a);

    return 0;
}