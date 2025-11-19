// 실버5 11723번 집합(시간초과 단순 for문 if문 사용)
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int M;
	cin >> M;

	vector<int> S(21, 0);

	for (int i = 0; i < M; i++)
	{
		string temp;
		

		cin >> temp;

		if (temp == "all")
		{
			for (int j = 1; j < 21; j++)
			{
				S[j] = j;
			}
		}
		else if (temp == "empty")
		{
			fill(S.begin(), S.end(), 0);
		}
		else
		{
			int num = 0;
			cin >> num;

			if (temp == "add")
			{
				S[num] = num;
			}
			else if (temp == "remove")
			{
				S[num] = 0;
			}
			else if (temp == "check")
			{
				if (S[num] == num)
				{
					cout << 1 << '\n';
				}
				else
				{
					cout << 0 << '\n';
				}
			}
			else if (temp == "toggle")
			{
				if (S[num] == num)
				{
					S[num] = 0;
				}
				else
				{
					S[num] = num;
				}
			}
		}

		
		
	}

	return 0;
}
