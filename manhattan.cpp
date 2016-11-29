#include <iostream>
#include <algorithm> // includes the abs() function

using namespace std;

int main() {
  // We are given m points in n-dimensional space
  int m, n;
  // A[i][j] = coordinate j of the i-th point
  int A[1000][1000];
  // The n-dimensional point p to measure distances to
  int P[1000];
  int sum=0;
  //
  // Read in the input.
  //
  cin>>m>>n;
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      cin>>A[i][j];
    }
  }
  for(int k=0; k<n; k++){
  cin>>P[k];
}
for(int l=0;l<m;l++){
  for(int o=0; o<n; o++){
    sum=sum+ abs(P[o] - A[l][o]);
  }
  cout<<sum<<" ";
  sum=0;
}
  //
  // Solve the problem and output the answer.
  //

  return 0;
}
