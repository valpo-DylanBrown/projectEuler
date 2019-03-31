/*QUESTION
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10,001st prime number?
*/

//SOLUTION
#include <iostream>
#include<math.h>
using namespace std;
#define TERMS 10001
bool isPrime(int n){ //check if a number is prime
  //if we check 2 and 3, we can increment i by 6. We need to check 6x+-1 for primes.
  int limit; // calculate limit sqrt(n)
  int i = 5;
  if(n < 2){
    return false; //special cases
  }
  if(n%2 == 0){ //if its even we can disregard it
    return false;
  }
  if(n%3==0){ //if its divisible by three, we can disregard it
    return false;
  }
  limit = ceil(sqrt(n)); //calculate limit
  while(i<=limit){ //whie i is less then the limit
    if (n%i==0){ // if n is divisibe by i, break
      return false;
    }
    if(n%(i+2) == 0){ //need to check i+2
      return false;
    }
    i+=6;
  }
  return true;
}

long solution(int x){
  int cnt = 2;
  int n = 0;

  while(cnt<x){
    n+=6; //increment by 6 due to primes being 6x+-1
    if(isPrime(n+1)){ //check upper bound
      cnt++;
    }
    if(isPrime(n-1)){ // check lower bound
      cnt++;
    }
  }
  return n+1; //add one for last prime
}
int main(){
  cout << "Finding prime at " << TERMS << endl;
  cout << solution(TERMS) << endl;
}
