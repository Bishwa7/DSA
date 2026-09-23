#include <bits/stdc++.h>
using namespace std;

int binaryToDecimalMethod1(int num)
{
    int decimal = 0;
    int i = 0;
    while(num>0)
    {
        int bit = num %10;
        decimal = decimal+ bit * pow(2,i++);
        num = num/10;
    }
    return decimal;
}


int main()
{
    int binary;
    cin>>binary;
    
    cout<< binaryToDecimalMethod1(binary);

    return 0;
}