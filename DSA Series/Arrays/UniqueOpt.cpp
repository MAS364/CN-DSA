#include <iostream>
using namespace std;

int Unique(int arr[], int n) {
  int s = 0;
  for (int i = 0; i < n; i++) {
    s = s ^ arr[i];
  }

  return s;
}

int main() {
  int arr[] = {1, 3, 1, 3, 6, 6, 7, 10, 7};
  cout << Unique(arr, 9);
}
