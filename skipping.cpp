#include <iostream>
#include <algorithm> // has max()

using namespace std;

int main() {
  // declare some variables
  int n,k;
  int A[10000];
  int total = 0;
  int max = 0;
  // for example, what do you need to store the input?
  cin>>n;
  cin>>k;

  for(int i=0;i<n;i++){
    cin>>A[i];
  }
  for(int i=0; i<n; i++){
    for(int j =i; j<n; j=j+k){
    total= total + A[j];
  }
  if (total > max){ max= total; }
  total=0;
}
cout<<max<<endl;
  // solve the problem

  // print the answer

  return 0;
}
