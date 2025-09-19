#include <iostream>    
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N = 0, K = 0;
	cin >> N >> K;

	vector<pair<int, int>> bag(N);

	for (int i = 0; i < N; i++)
	{
		cin >> bag[i].first >> bag[i].second;
	}

	vector<int>dp(K + 1,0);

	for (int i = 0; i < N; i++)
	{
		for (int j = K; j >= bag[i].first; j--)
		{
			dp[j] = max(dp[j], dp[j - bag[i].first] + bag[i].second);
		}
	}

	cout << dp[K] << "\n";


	return 0;
}
