#include <iostream>    
#include <string>
#include <queue>
#include <vector>
#include <tuple>

using namespace std;

struct State {
	int x, y;           // 현재 위치
	int wall_broken;    // 벽을 부쉈는지 여부 (0: 안부숨, 1: 부숨)
	int distance;       // 현재까지의 거리

	State(int x, int y, int wall_broken, int distance) : x(x), y(y), wall_broken(wall_broken), distance(distance) {}
};

int main()
{
	int N = 0, M = 0;
	cin >> N >> M;

	vector<string> map(N);
	for (int i = 0; i < N; i++)
	{
		cin >> map[i];
	}
	vector<vector<vector<int>>> visited(N, vector<vector<int>>(M, vector<int>(2, false)));

	queue<State> q;
	q.push(State(0, 0, 0, 1));
	visited[0][0][0] = true;


	int dx[] = { -1, 1, 0, 0 };
	int dy[] = { 0, 0, -1, 1 };

	while (!q.empty())
	{
		State current = q.front();
		q.pop();

		if (current.x == N - 1 && current.y == M - 1)
		{
			cout << current.distance << "\n";
			return 0;
		}

		for (int i = 0; i < 4; i++)
		{
			int nx = current.x + dx[i];
			int ny = current.y + dy[i];

			if (nx < 0 || nx >= N || ny < 0 || ny >= M)
			{
				continue;
			}

			if (map[nx][ny] == '0')
			{
				if (!visited[nx][ny][current.wall_broken])
				{
					visited[nx][ny][current.wall_broken] = true;
					q.push(State(nx, ny, current.wall_broken, current.distance + 1));

				}
			}
			else if (map[nx][ny] == '1')
			{
				if (current.wall_broken == 0 && !visited[nx][ny][1])
				{
					visited[nx][ny][1] = true;
					q.push(State(nx, ny, 1, current.distance + 1));
				}
			}
			
		}

	}
	cout << -1 << "\n";
	return 0;
}