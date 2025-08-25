#include <bits/stdc++.h>
using namespace std;

#define PI 3.1456
#define MAXX(x,y) (x>y? x:y)

float circleArea(float r)
{
    return PI * r * r;
}

void fun()
{
    int x = 6;
    int y = 7;
    int c = MAXX(x,y);
    cout<<c<<endl;
}

int main()
{
    cout<<circleArea(6)<<endl;
    
    fun();

    return 0;
}