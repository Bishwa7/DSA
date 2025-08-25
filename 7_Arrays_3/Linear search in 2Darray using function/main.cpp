#include <bits/stdc++.h>
using namespace std;


bool search2Darray(int arr[][3],int rowSize, int colSize, int target)
{
    for(int row=0; row<rowSize; row++)
    {
        for(int col=0; col<colSize; col++)
        {
            if(arr[row][col] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    //cout<<"Hello World";
    
    int arr[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
    
    int rowSize = 3;
    int colSize = 3;
    int target = 50;
    
    bool ans = search2Darray(arr,rowSize,colSize,target);
    cout<<"Answer is = "<<ans<<endl;

    return 0;
}