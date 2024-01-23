// START 116
// Ques 2 Solution
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int flag=0;
        int count = 0;
        char arr[6];
        for(int i=0; i<6; i++) cin >> arr[i];
        for(int i=0; i<6; i++)
        {
            if(arr[i] == 'W')
            {
                count++;
                if(count == 3)
                {
                    flag=1;
                    break;
                }
            }
            else count = 0;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" <<endl;
    }
}