#include <bits/stdc++.h>
using namespace std;

int main()
{
    // std::cout<<"Hello World";
    
    int num1=10;
    float num2=5.5;
    float result=num1+num2;  //implicit conversion of num1 from int to float 
    cout<<result<<endl;
    
    
    char ch = 'A';
    int a = ch+1;   //implicit conversion of ch from char to int and also adding 1
    cout<<a<<endl;
    char a1 = a;    // implicit conversion of a from int to char 
    cout<<a1<<endl;  

    return 0;
}
