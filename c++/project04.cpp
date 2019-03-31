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
  num = a*b; //number is the product
  n = num; //set n equal to num since we are changing num
  rev = 0; //set reverse to 0
  while(num > 0){ //while num is positive
    digit = num % 10; //digit is the modulus 10
    rev = rev*10 + digit; //set reverse
    num = num / 10; //decrement num
  }
  /*cout << "n: " << n << endl;
  cout << "rev: " << rev << endl;*/
  return n == rev; //if num equal rev, number is a palindrome
}


int main(){
  int a;
  int b;
  bool found;
  int largestProduct;
  int currProduct;
  found = false;

  for(int i = 999; i>100; i--){
    a = i; //set term1

    for(int j = 999; j > 100; j--){
      b = j; //set term 2
      currProduct = a*b; //look at current product
      if(isPalindrome(a, b) == true){ //if the palindrome exists
        found = true; //flag it
        //cout << "Palindrome found at product of " << a << " and " << b <<": " << a*b << endl;
        if(currProduct > largestProduct){ //if its the largest
          largestProduct = currProduct;
        }

        //break;
      }
      cout << "LARGEST: " << largestProduct << endl; //send it
      if(found == true){
        //break;
      }
    }


  }
  /*cout << "Checking palindrome of " << a << " and " << b << endl;
  cout << "number " << (isPalindrome(a,b) ? "IS" : "IS NOT") << " a palindrome" << endl;*/
}
