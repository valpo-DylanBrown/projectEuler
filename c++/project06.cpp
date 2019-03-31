/*QUESTION
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers
and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

//SOLUTION
#include <iostream>
#include<math.h>
using namespace std;
#define TERMS 100

int main(){
  long sumSqaure = 0;
  long squareSum = 0;
  long diff = 0;
  long squared;

  for(int i=1; i<=TERMS; i++){
    sumSqaure+=pow(i,2); //sum each term squared
  }
  cout << "sumSqaure: " << sumSqaure << endl;

  for(int i=1; i<=TERMS; i++){
    squareSum+=i; // sum all terms
  }
  squared = pow(squareSum,2); //square the sum
  //cout << "squareSum: " << squareSum << endl;
  cout << "squared: " << squared << endl;

  cout << "Difference: " << squared - sumSqaure << endl; //take difference
}
