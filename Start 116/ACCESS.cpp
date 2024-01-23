// START 116
// Ques 3 Solution
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    long long n, x;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        string str;
        cin >> str;
        int pass=0;
        int flag=1;
        for(int i=0; i<n; i++)
        {
            if(str[i] == '0' && pass==0)
            {
                flag=0;
                break;
            }
            else if(str[i] == '0') pass--;
            else if(str[i]=='1')
            pass = x;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO"  << endl;
    }
	// your code goes here

}