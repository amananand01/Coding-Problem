#include <iostream>
// #include<math.h>
using namespace std;

int main() {
  int n,result;
  cin >> n;

  // solve the problem

  if( n < 0 ){
  while( n < 0 ){
    n=n+3 ;
  }
result=n;
}
else{ result = n % 3 ;}
  cout << result << endl;
  // output the answer

  return 0;
}
  
