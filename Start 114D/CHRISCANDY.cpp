// Start 114 D
// Ques 3 Solution
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, val;
    cin >> t;
    while(t--)
    {
        // unordered_set<long long> set;
        stack<int> st;
        st.push(0);
        cin >> n;
        vector<long long> v;
        for(int i=0; i<n; i++)
        {
            cin >> val;
            v.push_back(val);
        }
        int count=0;
        for(int i=0; i<n-1; i++)
        {
            if(v[i] > v[i+1] || st.top() > v[i+1])
            {
                // set.insert(v[i+1]); 
                count++;
                if(st.top() < v[i])
                {
                    st.pop();
                    st.push(v[i]);
                }
            }
            else if(st.top()>v[i+1])
            {
                st.pop();
                st.push(v[i+1]);
            }
        }
        cout << count << endl;
    }

}

