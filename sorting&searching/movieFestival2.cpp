#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

// Pending
// Think why and where you went wrong.
// Think async

int main() {
    ll n, k;
    cin >> n >> k;
    vector<pair<int, int>> m(n);
    for (int i = 0; i < n; i++) {
        cin >> m[i].second >> m[i].first;
    }
    sort(m.begin(), m.end());
	multiset<ll> ms;
    cout << sln << endl;
}
