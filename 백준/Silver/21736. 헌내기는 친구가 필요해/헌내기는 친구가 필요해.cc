// 실버2 21736번 헌내기는 친구가 필요해(그래프 탐색)
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M;
vector<vector<char>> graph;
vector<vector<bool>> visited;


int BFS(int x, int y)
{
	queue<pair<int, int>> q;
	q.push({ x,y });
	visited[x][y] = true;
	int count = 0;

	int dx[4] = { 0, 1, 0, -1};
	int dy[4] = { -1, 0, 1, 0 };

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || nx >= N || ny <0 || ny >= M)
			{
				continue;
			}

			if (visited[nx][ny] || graph[nx][ny] == 'X')
			{
				continue;
			}

			visited[nx][ny] = true;
			if (graph[nx][ny] == 'P')
			{
				count++;
			}
			q.push({ nx,ny });

		}
	}
	return count;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	cin >> N >> M;

	graph.assign(N, vector<char>(M));
	visited.assign(N, vector<bool>(M, false));

	int x, y;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> graph[i][j];
			if (graph[i][j] == 'I')
			{
				x = i;
				y = j;
			}
		}
	}

	int result = BFS(x, y);

	if (result == 0)
	{
		cout << "TT" << '\n';
	}
	else
	{
		cout << result << '\n';
	}

	return 0;
}
