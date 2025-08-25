#include <bits/stdc++.h>
using namespace std;


class Shape
{
    public:
    virtual void draw()
    {
        cout<<"Generic Drawing..."<<endl;
    }
};

class Circle : public Shape
{
    public:
    void draw()
    {
        cout<<"Circle Drawing..."<<endl;
    }
};

class Rectangle : public Shape
{
    public:
    void draw()
    {
        cout<<"Rectangle Drawing..."<<endl;
    }
};




void ShapeDrawing(Shape *s)
{
    s->draw();
}





int main()
{
    Circle c;
    ShapeDrawing(&c);
    
    Rectangle *r = new Rectangle();
    ShapeDrawing(r);
    
    cout<<endl;
    
    // Upcasting 
    
    Shape *s100 = new Shape();
    s100->draw();
    
    Shape *s200 = new Circle();   // Upcasting -> Parent Obj holding Child Obj;
    s200->draw();
    
    
    // Downcasting
    
    Circle *c11 = new Circle();
    c11->draw();
    
    
    Shape *s300 = new Shape();
    Circle *c12 = (Circle *)s300;    // Downcasting -> Child Obj holding Parent Obj;
    c12->draw();
    
    
    
    Shape *s500 = new Shape();
    Circle *c15 = (Circle *)s500;   // Downcasting
    ShapeDrawing(c15);
    
    
    
    
    
    

    return 0;
}