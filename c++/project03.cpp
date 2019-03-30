/*QUESTION
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

//SOLUTION
#include <iostream>
using namespace std;
#define NUMBER 600851475143
int main(){
  long a;
  long b;
  long c;
  a = NUMBER;
  b = 2;
  c = -9999;
  while(1){
    if(a % b == 0){
      a = a/b;
      //cout << "Factors: " << b;
      if(b > c){
      c= b;

      }
      b = 2;
    }
    else{
      b++;
    }
    if(a == 1){
      break;
    }
  }
  cout << endl;
  cout << "Largest Prime: " << c << endl;
}
