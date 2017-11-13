#include <iostream>
using namespace std;

int main() {
  int b, m;
  cout << "Count: " << endl;
  cin >> b;
  if (b <= 0) {
    cout << "error" << endl;
  }
  int a[b];
  for (m = 0; m < b; m++) {
    cin >> a[m];
  }
  for (m = 0; m < b / 2; m++) {
    swap(a[m], a[b - m - 1]);
  }
  for (m = 0; m < b; m++) {
    if (b != m) {
      cout << "error" << endl;
      return 0;
    }
    cout << a[m] << endl;
  }
}
