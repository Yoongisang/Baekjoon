#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
#include <stack>
#include <queue>
#include <utility>
#include <cmath>

using namespace std;

int main() 
{
	int n = 0;
	cin >> n;
	vector<int> stair(n);

	for (int i = 0; i < n; i++)
	{
		cin >> stair[i];
	}
	
	if (n == 1)
	{
		cout << stair[0] << "\n";
		return 0;
	}

	vector<pair<int, int>> dp(n);
	dp[0].first = dp[0].second = stair[0];
	dp[1].first = stair[1];
	dp[1].second =  stair[0] + stair[1];

	for (int i = 2; i < n; i++)
	{
		dp[i].first = max(dp[i-2].first, dp[i-2].second) + stair[i];
		dp[i].second = dp[i - 1].first + stair[i];

	}

	cout << max(dp[n - 1].first, dp[n - 1].second) << "\n";

	return 0;
}
