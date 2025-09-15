#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
#include <stack>
#include <queue>
#include <utility>
#include <cmath>

using namespace std;

pair<int, int> memo[41];
bool b[41] = { false };

pair<int, int> fibo(int n)
{
	if (b[n]) return memo[n];

	if (n == 0)
	{
		b[0] = true;
		return memo[0] = { 1,0 };
	}

	if (n == 1)
	{
		b[1] = true;
		return memo[1] = { 0,1 };
	}

	pair<int, int> result1 = fibo(n - 1);
	pair<int, int> result2 = fibo(n - 2);

	b[n] = true;
	return memo[n] = { result1.first + result2.first, result1.second + result2.second };

}

int main() 
{
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n = 0;
		cin >> n;
		pair<int, int> result = fibo(n);
		cout << result.first << " " << result.second << "\n";
	}
	
	return 0;
}
