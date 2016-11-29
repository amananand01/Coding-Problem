#include <iostream>
#include <algorithm> // for max()

using namespace std;

int main() {
  // declare your variables
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
int i=0;
int value=0;
int counter=0;
for(int j=0;j<n;j++){
    i=j;
    while(a[i]>a[i+1] && i<n-1){
      value=a[j]-a[i+1];
      i++;
    }
    j=i;
    i=0;
    if(value>counter){
      counter=value;
      value=0;
  }
}
  cout<<counter<<endl;
  // read the input

  // compute the answer

  // output the answer

  return 0;
}
