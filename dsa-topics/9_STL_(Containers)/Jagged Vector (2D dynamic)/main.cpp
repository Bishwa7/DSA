#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    
    
    vector<vector<int>> v (4);
    int row = v.size();
    int col;
    
    for(int i=0; i<row; i++)
    {
        cout<<"Enter number of col for "<<i+1<<"row = ";
        cin>>col;
        v[i]= vector<int>(col);
        
        for(int j=0; j<col; j++)
        {
            cout<<"Enter element for "<<i<<" "<<j<<" = ";
            cin>>v[i][j];
        }
    }
    
    
    
    cout<<endl<<"Printing 2D vector = "<<endl;
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}