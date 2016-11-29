#include <iostream>

using namespace std;

int main() {
  int n;
  int array[1000];
  int counter = 0;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> array[i];
  }
  int min=array[0];
  for (int i = 0; i < n; ++i) {
    if( min < array[i]){
      counter = counter + (array[i] - min);
    }
    min = array[i];
  }
  
  cout<< counter << endl;

  // now compute and print the answer
  // yoyo
  return 0;
}
