#include <iostream>

using namespace std;

int main() {
  int n;
  int array[1000];
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> array[i];
  }
  int max = array[0] , min = array[n-1];
  for (int i = 0; i < n; ++i) {
    if( max < array[i] ){
      max = array[i];
    }
    if( min > array[i]){
      min = array[i];
    }
  }
  cout<< max-min <<endl;
  // now solve the problem and print the answer

  return 0;
}
