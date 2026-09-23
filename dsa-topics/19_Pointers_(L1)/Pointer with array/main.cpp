#include <bits/stdc++.h>
using namespace std;


int main()
{
    //cout<<"Hello World";
    
    
    int arr[] = {10,20,30,40,50};
    
    int *ptr = arr;
    
    cout<<"arr = "<<arr<<endl;
    cout<<"&arr = "<<&arr<<endl;
    cout<<"arr[0] = "<<arr[0]<<endl;
    cout<<"&arr[0] = "<<&arr[0]<<endl;
    cout<<"*arr = "<<*arr<<endl;
    cout<<"ptr = "<<ptr<<endl;
    cout<<"&ptr = "<<&ptr<<endl;
    cout<<"*ptr = "<<*ptr<<endl;
    cout<<"*arr+1 = "<<*arr+1<<endl;
    cout<<"*(arr+1) = "<<*(arr+1)<<endl;
    
    
    cout<<"arr+1 = "<<arr+1<<endl;
    cout<<"&arr+1 = "<<&arr+1<<endl;

    return 0;
}