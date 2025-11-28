// 실버3 17626번 Four Squares(다이나믹 프로그래밍)
#include <iostream>
#include <vector>
#include <algorithm> // min()을 사용하기위해 추가

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	// min()로 최솟값 갱신을위해 1e9 == 충분히 큰 값으로 초기화
	vector<int> DP(N + 1, 1e9); 
	DP[0] = 0;

	for (int i = 1; i <= N; i++)
	{
		//j의 제곱이 i보다 작을때 까지 체크
		for (int j = 1; j * j <= i; j++)
		{
			DP[i] = min(DP[i], DP[i - j * j] + 1);
		}
	}
	cout << DP[N] << '\n';
	return 0;
}
