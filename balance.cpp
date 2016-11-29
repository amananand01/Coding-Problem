#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
  int a, b, c;

  cin >> a >> b >> c;
  int a1,b1,c1;
  // solve the problem
  int result = (a+b+c)/3;

  a1 = abs(a - result);
  b1 = abs(b - result);
  c1 = abs(c - result);
  cout << a1 << " " << b1 << " " << c1 << endl;
  // cout<< abs(8-9) << endl;
  return 0;
}
