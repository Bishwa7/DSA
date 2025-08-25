#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    
    vector<vector<int>> arr (3, vector<int>(4,0));
    int row = arr.size();
    int col = arr[0].size();
    
    
    for(int i=0; i<row; i++)
    {
        for(int j =0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    
    cout<<endl<<"Elements in 2D vector = "<<endl;
    
    for(int i=0; i<row; i++)
    {
        for(int j =0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}