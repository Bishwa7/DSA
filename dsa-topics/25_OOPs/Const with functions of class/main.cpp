#include <bits/stdc++.h>
using namespace std;

class abc
{
    mutable int x;
    int *y;
    int z;
    
    public:
    
    abc()
    {
        x = 0;
        y = new int (0);
        z = 0;
    }
    
    abc(int _x, int _y, int _z=10): x(_x), y(new int (_y)), z(_z){}
    
    int getX() const
    {
        x += 1;     // reassignable beacuse of mutable keyword
        return x;
    }
    void setX(int _val)
    {
        x = _val;
    }
    
    int getY() const
    {
        return *y;
    }
    void setY(int _val)
    {
        *y = _val;
    }
    
    int getZ() const
    {
        return z;
    }
};

void printabc(const abc& a)
{
    cout<<a.getX()<<" "<<a.getY()<<" "<<a.getZ()<<endl;
}

int main()
{
    abc a;
    cout<<a.getX()<<" "<<a.getY()<<" "<<a.getZ()<<endl;
    
    abc b(1,2);
    printabc(b);
    
    abc c(1,2,3);
    printabc(c);
    

    return 0;
}