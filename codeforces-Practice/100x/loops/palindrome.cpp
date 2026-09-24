#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    bool palindrome = true;
    
    long long num;
    cin>>num;
    string s = to_string(num);
    
    int left = 0;
    int right = s.length()-1;
    
    while(left < right){
        if(s[left] != s[right]){
            palindrome = false;
        }
        left++;
        right--;
    }
    cout<<(palindrome? "YES" : "NO");
    
    return 0;
}