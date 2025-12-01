// 실버2 랜선 자르기(이분 탐색)
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int K, N;
	cin >> K >> N;

	vector<long long> v(K);
	long long maxLen = 0;

	for (int i = 0; i < K; i++)
	{
		cin >> v[i];
		maxLen = max(maxLen, v[i]);
	}

	long long left = 1; //최소 길이
	long long right = maxLen; // 최대 길이
	long long answer = 0;

	while (left <= right)
	{
		// 자를 길이
		long long mid = (left + right) / 2;

		// mid 길이로 잘랐을 때 만들 수 있는 갯수
		long long count = 0;

		for (const auto& array : v)
		{
			count += array / mid;
		}

		// N개 이상 만들 수 있으면 더 긴 길이 시도
		if (count >= N)
		{
			answer = mid;
			left = mid + 1;
		}
		// N개 못만들면 더 짧은 길이 시도
		else
		{
			right = mid - 1;
		}
	}

	cout << answer << '\n';

	return 0;
}
