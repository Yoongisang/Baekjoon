#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
#include <stack>
#include <queue>
#include <utility>
#include <cmath>

using namespace std;

bool comp(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.second == b.second)
		return a.first < b.first;

	return a.second > b.second;
}

int main() 
{
	int n;
	int aver = 0;
	double sum = 0;
	int center = 0;
	int d_c = 0;
	int range = 0;
	int max = 0;

	cin >> n;

	vector<int> v(n);
	vector <pair<int, int>> d;

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		sum += v[i];
	}

	sort(v.begin(), v.end());
	aver = round(sum / n);
	center = v[n / 2];

	while (d_c < n)
	{
		int cnt = 1;
		while (d_c + cnt < n && v[d_c] == v[d_c + cnt])
		{
			cnt++;
		}
		d.push_back({ v[d_c], cnt });
		d_c += cnt;
	}

	sort(d.begin(), d.end(), comp);

	if (d.size() > 1 && d[0].second == d[1].second)
	{
		max = d[1].first;
	}
	else
	{
		max = d[0].first;
	}

	range = v[n - 1] - v[0];
	cout << aver << '\n' << center << '\n' << max << '\n' << range << '\n';


	return 0;
}
