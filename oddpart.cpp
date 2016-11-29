#include <iostream>

using namespace std;

int main() {
  unsigned int n;
  cin >> n;
  // calculate the answer
unsigned int a=2;
unsigned int b=2;
if ((n % 2)!=0){
  b=n;
}
  else{
    while((b%2)==0){
    b = n/a;
    a=a*2;
  }
}
  // print the output
  cout << b << endl;
  return 0;
}
