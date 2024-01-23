// START 116
// Ques 4 Solution
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        long long val;
        vector<int> v;
        int max=0;
        for(int i=0; i<n; i++)
        {
            cin >>val;
            v.push_back(val);
        }
        for(int i=0; i<m; i++)
        {
            cin >>val;
            if(val > max) max=val;
        }
        sort(v.begin()+n-max, v.end());
        for(int i=0; i<n; i++) cout << v[i] << " ";
        cout << endl;
    }
}