#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
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

	vector<int> A(n);
	vector<int> dp(n, 1);

	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (A[j] < A[i])
			{
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	int result = *max_element(dp.begin(), dp.end());


	cout << result << "\n";

	return 0;
}
