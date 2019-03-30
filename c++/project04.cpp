/*QUESTION
A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

//SOLUTION
#include <iostream>
using namespace std;


bool isPalindrome(int a, int b){
  int n, num, rev, digit;
  num = a*b;
  n = num;
  rev = 0;
  while(num > 0){
    digit = num % 10;
    rev = rev*10 + digit;
    num = num / 10;
  }
  /*cout << "n: " << n << endl;
  cout << "rev: " << rev << endl;*/
  return n == rev;
}


int main(){
  int a;
  int b;
  bool found;
  int largestProduct;
  int currProduct;
  found = false;

  for(int i = 999; i>100; i--){
    a = i;

    for(int j = 999; j > 100; j--){
      b = j;
      currProduct = a*b;
      if(isPalindrome(a, b) == true){
        found = true;
        //cout << "Palindrome found at product of " << a << " and " << b <<": " << a*b << endl;
        if(currProduct > largestProduct){
          largestProduct = currProduct;
        }

        //break;
      }
      cout << "LARGEST: " << largestProduct << endl;
      if(found == true){
        //break;
      }
    }


  }
  /*cout << "Checking palindrome of " << a << " and " << b << endl;
  cout << "number " << (isPalindrome(a,b) ? "IS" : "IS NOT") << " a palindrome" << endl;*/
}
