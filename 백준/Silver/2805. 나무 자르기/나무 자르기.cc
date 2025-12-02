// 실버2 2805번 나무 자르기(이분 탐색)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long N, M;
	cin >> N >> M;

	vector<long long> v(N);
	long long answer = 0;

	long long left = 1;
	long long right = 0;
	long long mid;

	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
		right = max(right, v[i]);
	}




	while (left <= right)
	{
		mid = (left + right) / 2;

		long long result = 0;

		for (int i = 0; i < N; i++)
		{
			if (v[i] > mid)
			{
				result += (v[i] - mid);
			}
		}

		if (result < M)
		{
			right = mid - 1;
		}
		else
		{
			
			answer = max(answer, mid);
			left = mid + 1;
		}
	}
	
	cout << answer << '\n';

	return 0;
}
