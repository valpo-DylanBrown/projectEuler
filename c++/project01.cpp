/* QUESTION
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/
//SOLUTION
#include <iostream>
using namespace std;
#define ENDING 1000

int main(){
  int sum;
  for(int i = 1; i<ENDING; i++){
    if((i % 3 == 0) || (i % 5 == 0)){ //check for divisible by 5 or 3
      sum += i; // add it to the sum
    }
  }
  cout << "Sum from 0 to " << ENDING << " is " << sum << endl;
}
