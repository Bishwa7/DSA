#include <bits/stdc++.h>
using namespace std;

// Function Overloading
class Add
{
    public:
    int sum(int _x, int _y)
    {
        return _x + _y;
    }
    
    int sum(int x, int y, int z)
    {
        return x+y+z;
    }
    
    double sum(double x, double y, double z)
    {
        return x+y+z;
    }
};



// Operator Overloading
class Complex
{
    public:
    int real;
    int imag;
    
    Complex()
    {
        real = imag = -1;
    }
    
    Complex(int r, int i) : real(r), imag(i)
    {
        
    }
    
    
    Complex operator+(const Complex &b)
    {
        Complex temp;
        temp.real = this->real + b.real;
        temp.imag = this->imag + b.imag;
        
        return temp;
    }
    
    
    void print()
    {
        cout<<real<<" + i"<<imag<<endl;
    }
};





int main()
{
    // Function Overloading
    cout<<"Function Overloading"<<endl;
    
    int x = 5, y = 5, z=10;
    
    Add a;
    
    cout<<a.sum(x,y)<<endl;
    cout<<a.sum(x,y,z)<<endl;
    cout<<a.sum(3.5, 6.7, 12.1)<<endl<<endl;
    
    
    
    
    
    
    // Operator Overloading
    cout<<"Operator Overloading"<<endl;
    
    Complex first(2,5);
    Complex second(3,4);
    
    first.print();
    second.print();
    Complex C = first + second;     // Complex C(first + second)
    C.print();
    
    
    
    
    

    return 0;
}