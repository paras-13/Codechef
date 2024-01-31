#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int st = 0;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += v[i];

            if (sum >= m)
            {
                st++;
                sum = 0;
            }
        }

        cout << st << endl;
    }

    return 0;
}
