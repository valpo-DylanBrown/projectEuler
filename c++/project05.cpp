/*QUESTION
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

//SOLUTION
#include <iostream>
#include<math.h>
using namespace std;


int main(){
  long long num;
  /* No function needed
  1 - 1
  2 - 2*1
  3 - 3*1
  4 - 2*2 (2^2)
  5 - 5*1
  6 - 3*2
  7 - 7*1
  8 - 2*2*2 (2^3)
  9 - 3*3 (3^2)
  10 -  5*2
  11  - 11*1
  12  - 2*2*3
  13  - 13*1
  14  - 7*2
  15  - 5*3
  16  - 2^4
  17  - 17*1
  18  - 3^2*2
  19  - 19*1
  20  -5*2^2

  We need all of the primes
  so, 19, 17, 13, 11, 7, 5, 3, 2.
   However, for 4, we need an even number of twos. 2^4 should work. For 9, we need an even number of 3's (3^2)
  */
  num = pow(2,4)*pow(3,2)*5*7*11*13*17*19;
  cout << "for n=20: " << num << endl;
}
