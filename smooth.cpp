#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  int a[1001], n = 0;

  while (true) {
    cin >> a[n];
    if (a[n] == 0) {
      break;
    }
    ++n;
  }
  int counter=0;
  int bricks[1000];
  // now a[i] is the i'th number in the input and n
  // is the number of nonzero numbers in the input
  for(int i=0; i<n; i++){
    bricks[a[i]]++;
  }

  for(int k=0; k<n;k++){
  if(abs(bricks[k+1] - bricks[k]) > 1 ){
    counter=1;
    break;
  }
  else{counter=0;}
}
  if(counter==1){
    cout<<"rough"<<endl;
  }
  else if(counter==0){
    cout<<"smooth"<<endl;
  }
  // solve the problem and print the answer
  return 0;
}
