#include <bits/stdc++.h>
using namespace std;

bool dp[2000002];
int dice[2000];

int main() {
	int n;
	cin >> n;

	int sum = 0;
	for (int i=0; i<n; i++) {
		cin >> dice[i];
		sum += dice[i];
	}

	memset(dp, false, sizeof dp);
	dp[0] = true;
	for (int i=0; i<n; i++)
		for (int j=sum/2; j>=0; j--)
			if (j >= dice[i])
				dp[j] |= dp[j-dice[i]];

	int ans = 0;
	for (int j=sum/2; j>=0; j--)
		if (dp[j]) {
			ans = j;
			break;
		}

	cout << ans << ' ' << sum-ans << '\n';

	return 0;
}
