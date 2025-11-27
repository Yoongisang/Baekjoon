// 실버3 9461번 파도반 수열(다이나믹 프로그래밍)
#include <iostream>
#include <vector>

using namespace std;

vector<long> P(101, 0);

long long DP(int N)
{
	P[0] = 0;
	P[1] = 1;
	P[2] = 1;
	P[3] = 1;
	P[4] = 2;
	for (int i = 5; i <= N; i++)
	{
		P[i] = P[i - 1] + P[i - 5];
	}

	return P[N];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int N;
		long long result;
		cin >> N;
		result = DP(N);

		cout << result << '\n';
	}
	
	return 0;
}
