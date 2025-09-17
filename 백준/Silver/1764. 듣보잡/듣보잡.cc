#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
#include <stack>
#include <queue>
#include <utility>
#include <cmath>
#include <map>
#include <unordered_map>

using namespace std;


int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n = 0;
	cin >> n;
	int m;
	cin >> m;
	int sum = 0;


	map<string, string> name;
	map<string, string> name_list;

	for (int i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		name[temp] = temp;
	}



	for (int i = 0; i < m; i++)
	{
		string temp;
		cin >> temp;
		if (!name[temp].empty())
		{
			name_list[temp] = name[temp];
			sum++;
		}
		else
		{
			continue;
		}
	}
	cout << sum << "\n";
	for (auto& pair : name_list)
	{
		cout << pair.second << "\n";
	}
	
	return 0;
}
