#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> schedule(n);
	for (int i = 0; i < n; i++) {
		cin >> schedule[i].first >> schedule[i].second; 
	}
	sort(schedule.begin(), schedule.end(), [](pair<int, int> &a, pair<int, int> &b) {
			return a.first < b.first;
			});
	int extraRooms = 0, maxRoom = 0;
	priority_queue<int> departures;
	for (int i = 0; i < n; i++) {
		int a = schedule[i].first, b = schedule[i].second;
		while (!departures.empty() && a >= departures.top()) departures.pop();

		if (extraRooms) {
			extraRooms--;
		} else {
			maxRoom++;
		}
		departures.push(b);
	}
	cout << maxRoom << endl;
	return 0;
}
