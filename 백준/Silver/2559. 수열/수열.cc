#include <iostream>    
#include <string>
#include <queue>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	vector <int> v(N);
	vector <int> sum;

	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	for (int i = 0; i < N - (K - 1); i++)
	{
		int temp = 0;
		for (int j = i; j < i + K; j++)
		{
			temp += v[j];
		}

		sum.push_back(temp);
	}

	sort(sum.begin(), sum.end());

	cout << sum[N - K] << '\n';
	return 0;
}
