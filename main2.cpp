#include <iostream>

using namespace std;

int main()
{
    int i, n, x;
    cout << "Count: " << endl;
    cin >> n;
    if (n <= 0)
      return 0;
    
    int a[n];
    
    cout << "A number of: " << endl;
    
    for (i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    cout << "Elements: " << endl;
    cin >> x;
    int b[x - 1], c[n - x - 1];
    for (i = 0; i < x; i++) 
    {
        b[i] = a[i];
    }
    for (i = 0; i < n - x; i++) 
    {
        c[i] = a[i + x];
    }
    for (i = 0; i < n - x; i++) 
    {
        cout << c[i] << " ";
    }
    for (i = 0; i < x; i++) 
    {
        cout << b[i] << " ";
    }
    return 0;
}
