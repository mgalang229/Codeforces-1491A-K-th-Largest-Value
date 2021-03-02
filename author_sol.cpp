#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, q;
	cin >> n >> q;
	vector<int> a(n);
	// create a 'cnt' variable to maintain the occurrences of 1 after specific changes below
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 1) {
			cnt++;
		}
	}
	for (int i = 0; i < q; i++) {
		int t;
		cin >> t;
		if (t == 1) {
			int x;
			cin >> x;
			if (a[x - 1]== 1) {
				// if the element in the x-th position is already 1 then decrement 'cnt'
				// since: a[x] = 1 - 1 = 0
				cnt--;
			} else {
				// otherwise, increment 'cnt'
				// since: a[x] = 1 - 0 = 1
				cnt++;
			}
			a[x - 1] = 1 - a[x - 1];
		} else {
			int k;
			cin >> k;
			// check  if the number of 1's are sufficient enough to reach the k-th position
			cout << (cnt >= k ? 1 : 0) << '\n';
		}
	}
	return 0;
}
