#include<iostream>

using namespace std;
int main(){
  char john[1000];
  char dr[1000];
  int i = 0;
  int j=0;
  cin>>john[0];
  while(john[j]!='h'){
    j++;
    cin>>john[j];
  }
  int k=0;
  cin>>dr[0];
  while(dr[k]!='h'){
    k++;
    cin>>dr[k];
  }
  while(john[i]==dr[i]){
      i++;
  }
  // cout<<"ddddddddddddddddddddddddddddddd";
  if(dr[i]=='a'){
    cout<<"no"<<endl;
  }
  else{
  cout<<"go"<<endl;
}
  return 0;
}
