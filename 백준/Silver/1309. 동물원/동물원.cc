#include <iostream>
#include <vector>
using namespace std;

const int MOD = 9901;

int main()
{
	int N;
	cin >> N;

	vector<vector<long long>> dp(N + 1, vector < long long>(3, 0));

	dp[0][0] = 1;

	for (int i = 1; i <= N; i++)
	{
		dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % MOD;
		dp[i][1] = (dp[i - 1][0] + dp[i - 1][2]) % MOD;
		dp[i][2] = (dp[i - 1][0] + dp[i - 1][1]) % MOD;
	}

	long long ans = (dp[N][0] + dp[N][1] + dp[N][2]) % MOD;
	cout << ans << "\n";
	return 0;
}