#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n-1; i++) {
        int l = i + 1, r = n - 1;
        while (l < r) {
            int sm = v[i].first + v[l].first + v[r].first;
            if (sm == t) {
                cout << v[i].second + 1 << ' ' << v[l].second + 1 << ' ' << v[r].second + 1
                     << endl;
				return 0;
            } else if (sm < t)
                l++;
            else
                r--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
