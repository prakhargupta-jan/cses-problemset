/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n;
    cin >> n;
    for (int i = 0; i < (1 << n); i++) {
        string sln = "";
        int temp = i;
        if (i == 0) {
            cout << string(n, '0') << endl;
            continue;
        }
        while (temp != 1) {
            if ((temp&1) ^ ((temp>>1)&1)) sln+='1';
            else sln+='0';
            temp >>= 1;
        }
        sln+='1';
        sln += string(n-sln.size(), '0');
        reverse(sln.begin(), sln.end());
        cout << sln << endl;
    }
    return 0;
}