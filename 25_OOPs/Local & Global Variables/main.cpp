#include <bits/stdc++.h>
using namespace std;

int x = 2;

void fun()
{
    int x = 100;
    cout<<"fun() x = "<<x<<endl;
    
    ::x = 90;
    cout<<"Global x = "<<::x<<endl;
}


int main()
{
    ::x=4;
    
    int x = 20;
    
    cout<<"Local x = "<<x<<endl;
    cout<<"Global x = "<<::x<<endl;
    
    
    {
        int x = 50;
        cout<<"1st block x = "<<x<<endl;
        
        {
            int x = 70;
            cout<<"2nd block x = "<<x<<endl;
            
            cout<<"Global x = "<<::x<<endl;
            
            {
                cout<<"accessing previous block x = "<<x<<endl;    // becasue no x in this block so accesing previous one
            }
        }
    }
    
    
    fun();

    return 0;
}