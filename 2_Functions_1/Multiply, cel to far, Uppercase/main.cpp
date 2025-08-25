#include <iostream>
using namespace std;

int getMultiplication(int x, int y, int z)
{
    int result = x * y * z;
    return result;
    
}

void printNameTenTimes()
{
    for(int i=0; i<10; i++)
    {
        cout<<"Bishwanath Paul"<<" ";
    }
    cout<<endl;
}

void printMultiples(int num)
{
    for(int i=1; i<=10; i++)
    {
        cout<< num * i << " ";
    }
    cout<<endl;
}

int convertIntoCelcius(int far)
{
    int cel = (far-32)*5/9;
    return cel;
    
}

char convertIntoUpperCase(char ch)
{
    char ans = ch - 'a' + 'A';
    return ans;
}

int main()
{
    int multiplcationAnswer = getMultiplication(5,4,3);
    cout<< multiplcationAnswer<<endl;
    
    
    printNameTenTimes();
    
    int M = 5;
    printMultiples(M);
    
    int far=32;
    int celcius = convertIntoCelcius(far);
    cout<<"In Celcius = "<< celcius <<endl;

    
    char upperCase = convertIntoUpperCase('b');
    cout<<"Upper Case = "<< upperCase <<endl;

    

    return 0;
}