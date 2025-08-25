#include <bits/stdc++.h>
using namespace std;

void reversearray(char arr[])
{
    int size = strlen(arr);
    int i=0;
    int j=size-1;
    
    while(i<=j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    //cout<<"Hello World";
    
    char arr[50];
    cin.getline(arr,50);
    reversearray(arr);
    
    cout<<arr<<endl;

    return 0;
}