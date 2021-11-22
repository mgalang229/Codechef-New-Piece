#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		/*
		
			There will be three (3) cases:
			
			case 1: equal x and y coordinates
			output: 0
			reason: there is no need to move
			
			case 2: different colors of cells
			output: 1
			reason: it is possible to go there using one (1) move
				since two cells are different from each other
			
			case 3: same color of cells
			output: 2
			reason: it is not possible to go ther using one (1) move
				because two cells are the same and we need at least
				one (1) more move to go to a different cell so that's
				why the answer is two (2)
			
		*/
		int a, b, p, q;
		cin >> a >> b >> p >> q;
		int ans = -1;
		if (a == p && b == q) {
			ans = 0;
		} else if ((a + b) % 2 != (p + q) % 2) {
			ans = 1;
		} else {
			ans = 2;
		}
		cout << ans << '\n';
	}
	return 0;
}
