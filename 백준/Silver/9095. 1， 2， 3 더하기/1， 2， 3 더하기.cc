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
	int t = 0;
	int n = 0;
	cin >> t;
	vector<int> dp(11, 0);

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 4; i < 11; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		cout << dp[n] << "\n";
	}

	return 0;
}
