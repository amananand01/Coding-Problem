#include <iostream>

using namespace std;

int main() {
  int n = 0;
  int vote[1001];
  int counter = 0, val=0, max=0;
  // keep reading until we see 0
  while (true) {
    cin >> vote[n];
    if (vote[n] == 0) {
      break;
    }
    ++n;
  }

  // now n == # votes and vote[i] is the i'th vote
  // for 0 <= i <= n-1
  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
      if(vote[i] == vote[j]){
        counter++;
      }
    }
    if(counter == val){ max=0;}
    if(counter > val){ max = vote[i];    val=counter; }

    counter=0;
  }

  if(max==0){
    cout<<"tie"<<endl;
  }
  else { cout<<max<<endl;}
  // solve the problem and print the answer

  return 0;
}
