#include <iostream>
using namespace std;

int main()
{
    long long t, n;
    cin >> t;
    while(t--)
    {
       cin >> n;
       int flag=0;
       if(n%4==0 || n%3==0) cout << "Yes" << endl;
       else
       {
            while(n>0)
            {
                int a=n%3;
                int b=n%4;
                if(a<=b) n-=3;
                else n-=4;
                if(n==0) flag=1;
            }
            if(flag) cout << "Yes" << endl;
            else cout << "No" << endl;
           
       }
    }
	// your code goes here
	return 0;
}
