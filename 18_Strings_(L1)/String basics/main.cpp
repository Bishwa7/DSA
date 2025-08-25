#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout<<"Hello World";
    
    // string name = "Luffy";
    // cout<<"Name = "<<name<<endl;
    
    // string s;
    // cout<<"Enter string s = ";
    // cin>>s;
    // cout<<"string s = "<<s<<endl;
    
    
    // -----------------------------------------------------------
    
    // string s1;
    // cout<<"Enter string s1 = ";
    // getline(cin,s1);
    // cout<<"string s1 = "<<s1<<endl;
    
    // cout<<"Length of s1 = "<<s1.length()<<endl;
    
    // s1.push_back('X');
    // cout<<"string s1 = "<<s1<<endl;
    // cout<<"Length of s1 = "<<s1.length()<<endl;
    
    // s1.pop_back();
    // cout<<"string s1 = "<<s1<<endl;
    // cout<<"Length of s1 = "<<s1.length()<<endl;
    
    // cout<<"0th index of s1 = "<<s1[0]<<endl;
    
    // -----------------------------------------------------------
    
    
    // string firstName = "Monkey";
    // string lastName = "Luffy";
    
    // string fullName = firstName + " " + lastName;
    // cout<<"Full Name = "<<fullName<<endl;
    
    // cout<<"length of Full Name = "<< fullName.length()<<endl;
    
    // fullName.clear();
    // cout<<"fullName.clear();"<<endl;
    // cout<<"length of Full Name = "<< fullName.length()<<endl;
    
    // if(fullName.empty())
    // {
    //     cout<<"FullName is empty"<<endl;
    // }
    // else{
    //     cout<<"FullName is not empty"<<endl;
    // }
    
    
    // -----------------------------------------------------------
    
    
    string name = "Luffy";
    cout<<"Name = "<<name<<endl;
    reverse(name.begin(), name.end());
    cout<<"Reverse name = "<<name<<endl;
    
    cout<<"name.begin() = "<< *name.begin() <<endl;
    cout<<"name.end()-1 = "<< *(name.end()-1) <<endl;
    
    
    
    
    

    return 0;
}