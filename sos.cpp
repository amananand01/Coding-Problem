#include <iostream>
#include <cmath> // for sqrt

using namespace std;

// compute the greatest integer d such that
// d*d <= n (i.e. the floor of the square root)
unsigned int integer_sqrt(unsigned int x) {
  unsigned int d(sqrt(x));

  // should iterate at most once, probably none
  while ((d+1)*(d+1) <= x) {
    ++d;
  }

  return d;
}

int main() {
  // declare your variables
  // unsigned int total=0;
  bool sos = true;
  unsigned int n;
  cin>>n;
  unsigned int d= integer_sqrt(n);
  // cout<<"d: "<<d<<endl;
  // unsigned int s = d;

  unsigned int a;
  for(unsigned int i=0; i<=d;i++){
    unsigned int s = n - (i*i);
    a = integer_sqrt(s);
    // cout <<"a*a"<< a*a<<endl;
    // cout <<"s"<< s <<endl;
    if((a*a) == s){
      sos=true;
      break;
    }
    else{sos=false;}
  }
  if(sos==true){
    cout<<"sum of squares"<<endl;
  }
  else{
    cout<<"not sum of squares"<<endl;
  }
  // read the input

  // solve the problem

  // print the answer

  return 0;
}
