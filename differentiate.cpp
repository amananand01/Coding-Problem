#include <iostream>

using namespace std;

int main() {
  // Declare your variables
int start,end,P[4];
cin>>start>>end;
for(int i=3;i>=0;i--){
  cin>>P[i];
}
// cout<<P[2];
int counter,S[1000];
int q=1;
int d=1;
for(int i=start;i<=end;i++){
  for(int j=0;j<4;j++){
    for(int k=0;k<j;k++){
      d=d*(i+1);
      q=q*(i);
    }
    d=d*P[j];
    q=q*P[j];
    S[counter]=S[counter]+d-q;
    d=q=1;
  }
    counter++;
}
for(int i=0;i<counter-1;i++){
  cout<<S[i]<<" ";
}
// cout<<endl;
  // Read the input

  // Solve the problem

  return 0;
}
