// 실버4 1620번 나는야 포켓몬 마스터 이다솜
#include <iostream>
#include <map>
#include <string> 

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	map<int, string> numlist;
	map<string, int> namelist;
	
	for (int i = 1; i <= N; i++)
	{
		string temp;
		cin >> temp;

		numlist[i] = temp;
		namelist[temp] = i;

	}

	for (int i = 0; i < M; i++)
	{
		string input;
		cin >> input;

		if (isdigit(input[0]))
		{
			int num = stoi(input);
			cout << numlist[num] << '\n';

		}
		else
		{
			cout << namelist[input] << '\n';
		}

	}
	return 0;
}
