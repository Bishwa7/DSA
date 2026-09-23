#include <bits/stdc++.h>
#include "bird.h"
using namespace std;


void birdDoSomething(bird *b)
{
    b->eat();
    b->fly();
    b->eat();
    b->fly();
    b->eat();
    b->fly();
    
    cout<<endl;
}


int main()
{
    bird *a = new sparrow();
    birdDoSomething(a);
    delete a;
    
    
    bird *b = new eagle();
    birdDoSomething(b);
    delete b;
    
    
    unique_ptr<bird> p = make_unique<sparrow>();
    birdDoSomething(p.get());   //Automatic cleanup happens when a and b go out of scope — that is, at the end of the main() function.
    
    
    
    
    
    // sparrow *s = new sparrow();
    // s->eat();                        // cannot call eat() because sparrow eat() is private method, use bird to call s->eat()
    

    return 0;
}