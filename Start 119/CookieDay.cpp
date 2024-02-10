#include <iostream>
using namespace std;

int main()
{
  int t, n, k, a[100], mw, r;
  cin >> t; 
  while (t--)
  {
    cin >> n >> k; 
    mw = 1000000001; 
    for (int i = 0; i < n; i++)
    { 
      cin >> a[i]; 
      if (a[i] >= k)
      {
        r = a[i] % k; 
        if (r < mw) mw = r;
      }
    }
    if (mw == 1000000001) mw = -1;
    cout << mw << endl; 
  }
  return 0;
}
