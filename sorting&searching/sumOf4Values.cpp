#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<pair<int, pair<int, int>>> mv((n - 1) * n / 2);
    int idx = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            mv[idx] = {v[i] + v[j], {i, j}};
            idx++;
        }
    }
    sort(mv.begin(), mv.end());
    int l = 0, r = idx - 1;
    while (l < r) {
        int sm = mv[l].first + mv[r].first;
        if (sm == t && mv[l].second.first != mv[r].second.first &&
            mv[l].second.first != mv[r].second.second &&
            mv[l].second.second != mv[r].second.first &&
            mv[l].second.second != mv[r].second.second) {
            cout << mv[l].second.first + 1 << ' ' << mv[l].second.second + 1
                 << ' ' << mv[r].second.first + 1 << ' '
                 << mv[r].second.second + 1 << endl;
            return 0;
        } else if (sm > t) {
            r--;
        } else
            l++;
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
