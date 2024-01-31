#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int t = n/k;
        int var=0;
        
        for(int i=0; i<k; i++)
        {
            if(t==1)
            {
                var+=t;
                cout << var << " ";
            }
            else
            {
                var+=t;
                cout << var << " ";
            }
        }
        cout << endl;
    }
}
