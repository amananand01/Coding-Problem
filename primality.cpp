#include <iostream>
#include <cmath> // for sqrt

using namespace std;

// given a positive integer n <= 4,000,000
// this returns the smallest integer d such
// that d*d > n
//
// not needed to solve the problem, but some might
// find it helpful


unsigned int upper_sqrt(unsigned int n) {
  unsigned int d(sqrt((double) n));

  // should iterate only at most once or twice
  while (d*d <= n) {
    ++d;
    // cout<<d;
  }

  return d;
}

int main() {
  // read in the integer
  // look *carefully* at the maximum value of
  // the number in the problem description

  bool prime= true;
  unsigned int n;
  cin>>n;
  unsigned int d = upper_sqrt(n);

  if(n==1){
    prime=false;
  }
  for(unsigned int i=2;i<d; i++){

    if(n%i==0){
      prime=false;
    }
  }
  if(prime){
    cout<<"prime"<<endl;
  }
  else{
    cout<<"not prime"<<endl;
  }

  return 0;
}
