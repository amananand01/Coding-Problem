#include <iostream>

using namespace std;

int main() {
  int m, n;
  // A[i][j] = j-th coefficient of i-th linear equation
  int A[1000][1000];
  // X[j] = value of variable x_j
  int X[1000];
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
  cin>>X[k];
}
for(int l=0;l<m;l++){
  for(int o=0; o<n; o++){
    sum= sum + (A[l][o] * X[o]);
  }
  cout<<sum<<" ";
  sum=0;
}
// cout<<endl;
  //
  // Now solve the problem.
  //


  return 0;
}
