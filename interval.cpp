#include <iostream>

using namespace std;

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int val= 0;
  // now solve the problem and print the answer
  for(int i=x1; i<=y1; i++){
    if( (i>=x2) && (i<=y2) ){
      cout<<"intersect"<<endl;
      val=1;
      break;
    }
  }
  if(val==0){
    cout<<"disjoint"<<endl;
  }
  return 0;
}
