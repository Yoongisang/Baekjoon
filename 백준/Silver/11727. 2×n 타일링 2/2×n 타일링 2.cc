// 실버3 11727번 타일링2(다이나믹 프로그래밍)
#include <iostream>
#include <vector>

using namespace std;

vector<long long> DP(1001, 0);

void P()
{
	DP[1] = 1;
	DP[2] = 3;
	DP[3] = 5;

	for (int i = 4; i <= 1000; i++)
	{
		if (i % 2 == 0)
		{
			DP[i] = ((DP[i - 1] * 2) + 1) % 10007;
		}
		else
		{
			DP[i] = ((DP[i - 1] * 2) - 1) % 10007;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	P();

	int N;
	cin >> N;

	cout << DP[N] << '\n';

	return 0;
}
