#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
#include <stack>
#include <queue>
#include <utility>
#include <cmath>

using namespace std;

vector<int> memo(1000001, -1);

int dp(int n)
{
	if (n == 1)
		return 0;
	if (memo[n] != -1)
		return memo[n];

	int result = dp(n - 1) + 1;
	if (n % 2 == 0) result = min(result, dp(n / 2) + 1);
	if (n % 3 == 0) result = min(result, dp(n / 3) + 1);

	return memo[n] = result;
}

int main() 
{
	int n = 0;
	cin >> n;
	cout << dp(n) <<"\n";
	return 0;
}
