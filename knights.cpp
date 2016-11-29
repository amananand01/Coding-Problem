#include <iostream>

using namespace std;

int main() {
  // declare your variables
  int n,k,s;
  cin>>n;
  cin>>k;
  cin>>s;
  int prizes[100000];
  int friends_seats[100000];
  for(int i=0; i<n; i++){
    cin>>prizes[i];
  }
  for(int j=0; j<k; j++){
    cin>>friends_seats[j];

  }
  
  int total, position;
  for(int l=0; l<k; l++){
    position = (s + friends_seats[l])%n;
    total=total + prizes[position];
  }
  cout<<total<<endl;

  // read the input

  // solve the problem

  // print the answer

  return 0;
}
