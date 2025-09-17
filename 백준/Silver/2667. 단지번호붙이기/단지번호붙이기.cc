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

bool visited[25][25] = { false };
vector<int> group[25];
int c = 0;
int N = 0;
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

void dfs(int x, int y)
{

	visited[x][y] = true;
	c++;

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < N && ny >= 0 && ny < N && !visited[nx][ny] && group[nx][ny] == 1)
		{
			dfs(nx, ny);
		}
	}

	
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			char temp;
			cin >> temp;
			group[i].push_back(temp - '0');
			
			
		}
	}

	vector<int> Size;
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{

			
			if (group[i][j] == 1 && !visited[i][j])
			{
				dfs(i, j);
				if (c > 0)
				{
					Size.push_back(c);
					c = 0;
				}
			
			}
		}

	}

	cout << Size.size() << "\n";
	sort(Size.begin(), Size.end());
	for (int i = 0; i < Size.size(); i++)
	{
		cout << Size[i] << "\n";
	}


	return 0;
}