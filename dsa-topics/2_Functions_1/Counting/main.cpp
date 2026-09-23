#include <iostream>
using namespace std;

void myName();

void printCounting()
{
    for(int i=0; i<=5; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int sumFunc(int a , int b)
{
    int totalSum = (a+b);
    return totalSum;
}

int main()
{
    myName();
    
    printCounting();
    printCounting();
    printCounting();
    printCounting();
    
    cout<<endl;
    
    int x=5,y=10;
    //int ansSum = sumFunc(5,10);
    int ansSum = sumFunc(x,y);
    cout<<"Sum = "<<ansSum;
    

    return 0;
}

void myName()
{
    cout<<"Bishwanath Paul"<<endl;
}



