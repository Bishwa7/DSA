#include <bits/stdc++.h>
using namespace std;

int binaryToDecimalMethod1(int num) {
  int i = 0;
  int binnum = 0;
  while (num > 0) {
    int rem = num % 2; // get the remainder

    binnum = rem * pow(10, i++) + binnum; // reversing the bits
    num = num / 2;                        // divide the number by 2
  }
  return binnum; // returning the binary number
}

int binaryToDecimalMethod2(int num) {
  int i = 0;
  int binnum = 0;
  while (num > 0) {
    int rem = num & 1; // get the last bit

    binnum = rem * pow(10, i++) + binnum; // reversing the bits
    num = num >> 1;                       // right shift the number by 1
  }
  return binnum; // returning the binary number
}

int main() {
  int num;
  cin >> num; // takin the input as decimal number
  int binary = binaryToDecimalMethod1(num);
  cout << binary; // printing the binary number

  cout << endl;

  int binary2 = binaryToDecimalMethod2(num);
  cout << binary2; // printing the binary number

  return 0;
}