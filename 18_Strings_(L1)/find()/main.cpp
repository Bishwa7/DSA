#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout<<"Hello World";
    
    string name = "Attack on Titan";
    
    int ans = name.find("Titan");
    cout<<ans<<endl;
    
    
    int ans1 = name.find("Titan", 12);
    cout<<ans1<<endl;
    
    
    int ans2 = name.find('k');
    cout<<ans2<<endl;
    
    
    if(name.find('j') == string::npos)
    {
        cout<<"j not found"<<endl;
    }
    else{
        cout<<"j found"<<endl;
    }
    

    return 0;
}