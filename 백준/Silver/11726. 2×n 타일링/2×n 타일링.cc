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
	int dp[1001];
	
	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			dp[1] = 1;
		}
		else if (i == 2)
		{
			dp[2] = 2;
		}
		else
		{
			dp[i] = dp[i - 1] + dp[i - 2];
		}
		dp[i] %= 10007;
	}


	cout << dp[n] << endl;

	return 0;
}
