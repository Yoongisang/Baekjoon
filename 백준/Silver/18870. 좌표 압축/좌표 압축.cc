// 실버2 18870번 좌표 압축(정렬)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
	return a.second < b.second;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<pair<int, int>> v(N);
	vector<int> result(N);

	for (int i = 0; i < N; i++)
	{
		v[i].first = i;
		cin >> v[i].second;
	}

	sort(v.begin(), v.end(), compare);
	
	int answer = 0;

	for (int i = 0; i < N; i++)
	{
		if (i == 0)
		{
			result[v[i].first] = answer;
		}
		else
		{
			if (v[i].second != v[i - 1].second)
			{
				answer++;
			}
	
			result[v[i].first] = answer;
		}
	}



	for (const auto& list : result)
	{
		cout << list << " ";
	}
	return 0;
}
