// 실버3 9375번 패션왕 신해빈
#include <iostream>
#include <map>
#include <string> 

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	while (N--)
	{
		int M;
		cin >> M;

		map<string, int> clothes;

		for (int i = 0; i < M; i++)
		{
			string name, type;
			cin >> name >> type;
			clothes[type]++;
		}

		int result = 1;

		for (auto& item : clothes)
		{
			result *= (item.second + 1);
		}

		cout << result - 1 << '\n';
	}
	return 0;
}
