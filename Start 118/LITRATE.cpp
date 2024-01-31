#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int p, l;
        int rate;
        cin >> p >>l;
        rate = (l*100)/p;
        if(rate>=75) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	// your code goes here

}
