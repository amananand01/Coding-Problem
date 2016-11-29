#include <iostream>

using namespace std;

int main() {
  // Declare your variables
  int n;
  cin>>n;
  int f[n],s[n];
  for(int i=0;i<n;i++){
    cin>>f[i];
  }
  for(int j=0;j<n;j++){
    cin>>s[j];
  }
  int sum[n];
  int value=0;
  for(int k=n-1;k>=0;k--){
    sum[value]=f[k]-s[k];
    if(sum[value]<0){
      sum[value]=sum[value]+10;
      f[k-1]=f[k-1]-1;
    }
    value++;
  }
  for(int p=value-1;p>=0;p--){
    cout<<sum[p]<<" ";
  }
  // Read the input

  // Solve the problem

  return 0;
}
