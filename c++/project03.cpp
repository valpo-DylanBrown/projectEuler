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
  b = 2; //start at 2
  c = -9999; //largest
  while(1){
    if(a % b == 0){ //if you can divide it
      a = a/b; // do it
      //cout << "Factors: " << b;
      if(b > c){ // if the number is greater than the largest so far
      c= b;

      }
      b = 2; //reset b
    }
    else{
      b++; //if not divisible, increment b to try again
    }
    if(a == 1){
      break; //if a is broken all the way down, break;
    }
  }
  cout << endl;
  cout << "Largest Prime: " << c << endl;
}
