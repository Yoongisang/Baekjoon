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

	vector<int> dp(n);

	cin >> dp[0];

	for (int i = 1; i < n; i++)
	{
		vector<int> current(i + 1);
		for (int j = 0; j <= i; j++)
		{
			cin >> current[j];
		}

		for (int j = i; j >= 0; j--)
		{
			if (j == 0)
			{
				dp[j] = current[j] + dp[j];
			}
			else if (j == i)
			{
				dp[j] = current[j] + dp[j - 1];
			}
			else
			{
				dp[j] = current[j] + max(dp[j - 1], dp[j]);
			}
			
		}
	}

	int result = dp[0];
	for (int j = 0; j < n; j++)
	{
		result = max(result, dp[j]);
	}

	cout << result << "\n";
	return 0;
}
