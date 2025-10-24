#include <iostream>    
#include <string>
#include <queue>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
	if (a.second != b.second)
		return a.second < b.second;
	return a.first < b.first;
}

int main()
{
	int N;
	cin >> N;

	vector<pair<int, int>> v(N);

	for (int i = 0; i < N; i++)
	{
		cin >> v[i].first >> v[i].second;
		//cout << v[i].first << v[i].second;
	}

	sort(v.begin(), v.end(), compare);

	int EndTime;
	EndTime = v[0].second;

	int sum = 1;

	for (int i = 1; i < N; i++)
	{
		if (v[i].first >= EndTime)
		{
			EndTime = v[i].second;
			sum++;
		}
	}

	cout << sum << '\n';


	return 0;
}
