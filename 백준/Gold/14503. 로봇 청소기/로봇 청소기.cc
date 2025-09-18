#include <iostream>     
#include <vector>      
#include <string>       
#include <algorithm>    
#include <stack>
#include <queue>
#include <utility>
#include <cmath>
#include <map>
#include <unordered_map>

using namespace std;
int N, M;

vector<vector<int>> robot;
vector<vector<bool>> visited;

int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, 1, 0, -1 };


int main()
{
	int sum = 0;

	cin >> N >> M;
	robot.assign(N, vector<int>(M));
	visited.assign(N, vector<bool>(M, false));
	
	int x, y, dir;
	cin >> x >> y >> dir;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> robot[i][j];
		}
	}

	while (true)
	{
		if (robot[x][y] == 0 && !visited[x][y])
		{
			visited[x][y] = true;
			sum++;
		}

		bool found = false;

		for (int i = 0; i < 4; i++)
		{
			dir = (dir + 3) % 4;
			int nx = x + dx[dir];
			int ny = y + dy[dir];

			if (nx >=0 && nx < N && ny >= 0 && ny < M && robot[nx][ny] == 0 && !visited[nx][ny])
			{
				x = nx;
				y = ny;
				found = true;
				break;
			}
		}

		if (found)
			continue;

		int bx = x - dx[dir];
		int by = y - dy[dir];

		if (bx >=0 && bx < N && by >= 0 && by < M && robot[bx][by] == 0)
		{
			x = bx;
			y = by;
		}
		else
		{
			break;
		}

	}

	cout << sum << "\n";

	return 0;
}


