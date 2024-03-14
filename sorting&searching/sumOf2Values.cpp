/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int find(vector<ll> a, int n, int m = -1) {
    for (int i = 0; i < a.size(); i++) {
        if (i == m) continue;
        if (a[i] == n) return i+1;
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<ll> b = a;
    sort(a.begin(), a.end());
    int i = 0, j = n-1;
    while (i < j) {
        int sm = a[i]+a[j];
        if (sm == x) break;
        else if (sm > x) j--;
        else i++;
    }
    int a1 = find(b, a[i]);
    int a2 = find(b, a[j], a1-1);
    if (i == j) cout << "IMPOSSIBLE" << endl;
    else cout << min(a1, a2) << ' ' << max(a1, a2);
    return 0;
}