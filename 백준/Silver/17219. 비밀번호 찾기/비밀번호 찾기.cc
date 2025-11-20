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

	map<string, string> list;

	for (int i = 0; i < N; i++)
	{
		string site, password;
		cin >> site >> password;

		list[site] = password;
	}

	for (int i = 0; i < M; i++)
	{
		string temp;
		cin >> temp;

		cout << list[temp] << '\n';

	}


	return 0;
}
