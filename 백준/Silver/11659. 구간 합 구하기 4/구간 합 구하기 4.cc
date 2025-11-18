// 실버 3 11659번 구간 합 구하기 4 (누적 합)
#include <iostream>
#include <vector>
#include <algorithm> 
#include <numeric>

using namespace std;


int main()
{
	int N, M;
	cin >> N >> M;

	vector<long long> v(N + 1, 0); // long long으로 오버플로우 방지, 인덱스는 숫자값 그대로 쓰기위해 0을 비우기때문에 N + 1, 그리고 0으로 초기화
	for (int i = 1; i <= N; i++)
	{
		int x;
		cin >> x;
		v[i] = v[i - 1] + x;
	}

	vector<int> sum(M);

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		sum[i] = v[b] - v[a - 1];
	}

	for (int i = 0; i < M; i++)
	{
		cout << sum[i] << '\n';
	}

	return 0;
}
