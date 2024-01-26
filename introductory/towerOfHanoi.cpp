/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;
vector<pair<int, int>> sln;
ll ans;

void tow(int from, int to, int use, int disks) {
    if (disks == 1) {
        sln.push_back({from, to});
        ans++;
        return;
    }
    tow(from, use, to, disks-1);
    sln.push_back({from, to});
    ans++;
    tow(use, to, from, disks-1);
}


int main()
{
    ans = 0;
    ios::sync_with_stdio(0);cin.tie(0);
    ll n;
    cin >> n;
    tow(1, 3, 2, n);
    cout << ans << endl;
    for (auto &p : sln) {
        int a = p.first, b = p.second;
        cout << a << ' ' << b << endl;
    }

    return 0;
}