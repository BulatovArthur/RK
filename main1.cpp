#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cout << "Size: ";
  cin >> n;

  if ( n <= 0 )
  {
    cout << "Error" << endl;
    return 1;
  }

  cout << "Items of arr: ";
  int *a = new int [n];

  for (m = 0; m < n; m++)
  {
    cin >> a[m];
  }

  for (m = 0; m < n/2; m++)
  {
    swap (a[m], a[n-m-1]);
  }

  for (m = 0; m < n; m++)
  {
    cout << a[m];
  }

  delete [] a;
  return 0;
}

