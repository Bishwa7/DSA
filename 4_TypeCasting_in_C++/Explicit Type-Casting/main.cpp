#include <bits/stdc++.h>
using namespace std;

int main()
{
    //std::cout<<"Hello World";
    
    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + (int)num2 ;  //Explicit typecasting of num2 from float to int 
    cout<<result<<endl;
    
    
    int a = 10;
    int b = 3.0;
    float c = a / b;  
    cout<<c<<endl;
    float d = a / ((float)b);   //Explicit Typecasting of b from int to float 
    cout<<d<<endl;

    return 0;
}