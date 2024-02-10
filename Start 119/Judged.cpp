#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t, val;
	cin >> t;
	while(t--)
	{
	    int vote=0;
	    for(int i=0; i<5; i++) {
	        cin >> val;
	        if(val == 1) vote++;
	    }
	    if(vote>=4) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}

}
