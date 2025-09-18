#include <iostream>     
#include <vector>      
#include <string>       
#include <algorithm>    
#include <stack>
#include <queue>
#include <utility>
#include <cmath>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int p[1001];
	for (int i = 1; i <= n; i++)
	{
		cin >> p[i];
	}

	vector<int> dp(1001, 0);

	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
			dp[1] = p[1];
		for (int j = 0; j <= i; j++)
		{
			dp[i] = max(dp[i], dp[i - j] + p[j]);
		}

	}

	cout << dp[n] << "\n";

	return 0;
}