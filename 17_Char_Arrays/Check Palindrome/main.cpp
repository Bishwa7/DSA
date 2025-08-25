#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(char arr[])
{
    int s = 0;
    int e = strlen(arr)-1;
    
    while(s<=e)
    {
        if(arr[s] != arr[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

int main()
{
    //cout<<"Hello World";
    
    char arr[50];
    cin.getline(arr,50);
    
    bool ans = checkPalindrome(arr);
    
    if(ans)
    {
        cout<<"It is Palindrome"<<endl;
    }
    else
    {
        cout<<"It is not Palindrome"<<endl;
    }
    

    return 0;
}