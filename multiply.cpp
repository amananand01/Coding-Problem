#include <iostream>
using namespace std;

/**
Adds the number x*10^y to the arbitrary-precision number DST.
The result will be stored in DST.

DST is assumed to be dst_digits long. It must be the case that
0 <= x <= 99, and 0 <= y < dst_digits-1.
*/
void arbitrary_add(int *DST, int dst_digits, int x, int y) {
  DST[y] += x % 10;
  DST[y+1] += x / 10;
  for (int i = y; i < dst_digits; ++i) {
    if (DST[i] >= 10) {
      DST[i] -= 10;
      DST[i+1]++;
    }
  }
}

int main() {
  // Declare your variables
  int m,n;
  cin>>m>>n;
  int A[m],B[n];
  // Read the input
  for(int i=0;i<m;i++){
    cin>>A[i];
  }
  for(int j=0;j<n;j++){
    cin>>B[j];
  }
  int res[200]={0};
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      arbitrary_add(res, m+n , A[m-i-1]*B[n-j-1], i+j);
      // cout<<res[i+j]<<" ";
    }
  }
  for(int i=m+n-1;i>=0;i--){
    cout<<res[i]<<" ";
  }
  // Solve the problem

  return 0;
}
