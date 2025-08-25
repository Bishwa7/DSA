#include <iostream>
using namespace std;
int main()
{
    //std::cout<<"Hello World";
    
    int arr2[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr2[i];
    }
    
    for(int i=0; i<5; i++)
    {
        cout<<arr2[i]<<" ";
    }
    
    cout<<endl;
    
    for(int i=0; i<5; i++)
    {
        cout<<i[arr2]<<" ";       // This also works
    }
    cout<<endl;

    return 0;
}
