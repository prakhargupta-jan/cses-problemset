#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Comp {
  public:
    bool operator()(pair<int, int> &a, pair<int, int> &b) {
        return a.first > b.first;
    }
};

int main() {
    ll n;
    cin >> n;
    vector<vector<ll>> v(n, vector<ll>(3)); // arrival, departure, index
    for (int i = 0; i < n; i++) {
        cin >> v[i][0] >> v[i][1];
        v[i][2] = i;
    }

    // sorting according to the arrival time
    sort(v.begin(), v.end(),
         [](vector<ll> &a, vector<ll> &b) { return a[0] < b[0]; });

    int maxRoom = 0;
    vector<int> rooms(n);

    priority_queue<pair<int, int>, vector<pair<int, int>>, Comp>
        pq; // departure, roomNo
    for (int i = 0; i < n; i++) {
        if (pq.empty() || pq.top().first >= v[i][0]) {
            maxRoom++;
            rooms[v[i][2]] = maxRoom;
            pq.push({v[i][1], maxRoom});
        } else {
            pair<int, int> rm = pq.top();
            pq.pop();
            rooms[v[i][2]] = rm.second;
            pq.push({v[i][1], rm.second});
        }
    }

    cout << maxRoom << endl;
    for (int i = 0; i < n; i++)
        cout << rooms[i] << ' ';
    cout << endl;
    return 0;
}
