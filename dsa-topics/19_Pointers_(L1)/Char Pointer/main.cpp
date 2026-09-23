#include <bits/stdc++.h>
using namespace std;


int main()
{
    //cout<<"Hello World";
    
    char ch[100] = "Racecar";
    char *ctr = ch;
    
    cout<<"ch = "<< ch <<endl;
    cout<<"&ch = "<< &ch <<endl;
    cout<<"ch[0] = "<< ch[0] <<endl;
    cout<<"ctr = "<< ctr <<endl;
    cout<<"&ctr = "<< &ctr <<endl;
    cout<<"*ctr = "<< *ctr <<endl;
    cout<<"*(ctr+3) = "<< *(ctr+3) <<endl;
    cout<<"&ch[0] = "<< &ch[0] <<endl;
    cout<<"ctr+2 = "<< ctr+2 <<endl;
    cout<<"ctr+4 = "<< ctr+4 <<endl;

    return 0;
}