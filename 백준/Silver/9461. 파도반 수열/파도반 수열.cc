// 실버3 9461번 파도반 수열(다이나믹 프로그래밍)
#include <iostream>
#include <vector>

using namespace std;

vector<long long> P(101, 0);

void DP()
{
	P[0] = 0;
	P[1] = 1;
	P[2] = 1;
	P[3] = 1;
	P[4] = 2;
	for (int i = 5; i <= 100; i++)
	{
		P[i] = P[i - 1] + P[i - 5];
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	DP();

	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;

		cout << P[N] << '\n';
	}
	
	return 0;
}
