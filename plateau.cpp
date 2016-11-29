#include <iostream>
#include <algorithm> // for max()

using namespace std;

int main() {
  // declare variables
  long long n;
  cin>>n;
  long long a[100000];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int counter=1;
  int value=1;
  for(int j=0;j<n;j++){
    if(a[j]==a[j+1]){
      value++;
    }
    else if(a[j]!=a[j+1]){
      if(value>=counter ){
        counter=value;
      }
      value=1;
    }
  }
cout<<counter<<endl;
  // read the input

  // compute the answer

  // print the output

  return 0;
}
