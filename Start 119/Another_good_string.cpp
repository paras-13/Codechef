#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        string s;
        cin >> s;
        
        int curr = 1;
        int Max = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                curr++;
            } else {
                Max = max(Max, curr);
                curr = 1;
            }
        }
        int ptr=n-1;
        char last = s[n-1];
        int lastLen=0;
        while(s[ptr] == last) {
            lastLen++;
            ptr--;
        }
        Max = max(Max, curr);
        cout << Max << " ";
        
        while (q--)
        {
            char ch;
            cin >> ch;
            s += ch; n++;
            if(ch == last) lastLen++;
            else
            {
                last = ch;
                lastLen = 0;
                lastLen++;
            }
            Max = max(Max, lastLen);
            cout << Max << " ";
        }
        cout << endl;
    }

    return 0;
}
