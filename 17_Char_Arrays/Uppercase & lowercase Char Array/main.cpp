#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout<<"Hello World";
    
    char arr7[50];
    cin.getline(arr7,50);
    
    for(int i=0; i<50; i++)
    {
        if(arr7[i] >= 'a' && arr7[i] <= 'z')
        {
            arr7[i] = arr7[i] - 'a' + 'A';
        }
    }
    
    cout<<"Upper case = "<<arr7<<endl;
    
    for(int i=0; i<50; i++)
    {
        if(arr7[i] >= 'A' && arr7[i] <= 'Z')
        {
            arr7[i] = arr7[i] - 'A' + 'a';
        }
    }
    
    cout<<"Lower case = "<<arr7<<endl;

    return 0;
}