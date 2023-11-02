/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    ll sln = 0, curr = 0;
    cin >> curr;
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        if (curr > x) {
            sln += curr-x;
        } else {
            curr = x;
        }
    }
    cout << sln << endl;

    return 0;
}