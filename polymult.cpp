#include <iostream>

using namespace std;

int main() {
  int m, n;
  cin>>m>>n;
  // The first polynomial: P[i] = coefficient of x^i
  int P[1001];
  for(int i=0;i<=m;i++){
    cin>>P[i];
  }
  // The second polynomial: Q[j] = coefficient of x^j
  int Q[1001];
  for(int j=0;j<=n;j++){
    cin>>Q[j];
  }
  int S[3000];
  for(int i=0;i<=m;i++){
    for(int j=0;j<=n;j++){
      S[i+j]=S[i+j]+(P[i]*Q[j]);
    }
  }
  for(int i=0;i<m+n+1;i++){
    cout<<S[i]<<" ";
  }
  // cout<<endl;
  //
  // Read the input.
  //

  //
  // Now solve the problem.
  //

  return 0;
}
