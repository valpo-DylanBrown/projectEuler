/*QUESTION
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

//SOLUTION
#include <iostream>
#include<math.h>
using namespace std;
#define TARGET 1000;

int main(){
  int t1, t2, t3;
  const int sum = 1000;
  int a;
  for(a = 1; a<=sum/3; a++){
    int b;
    for(b= a+1; b<=sum/2; b++){
      int c = sum - a -b;
      if(pow(a,2)+pow(b,2) == pow(c,2)){
        t1 = a;
        t2 = b;
        t3 = c;
        cout << a << " " << b << " " << c << endl;
      }
    }
  }
  cout << "PRODUCT: " << t1*t2*t3 << endl;
  return 0;
}
