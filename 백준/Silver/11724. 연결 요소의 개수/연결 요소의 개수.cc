// 실버2 11724번 연결 요소의 개수(그래프)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> graph[1001];
vector<bool> visited;
int c = 0;

void DFS(int node)
{
	visited[node] = true;

	for (int i = 0; i < graph[node].size(); i++)
	{
		int next = graph[node][i];
		if (!visited[next])
		{
			DFS(next);
		}
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	visited.resize(N + 1, false);

	for (int i = 1; i <= M; i++)
	{
		int x, y;
		cin >> x >> y;

		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	for (int i = 1; i <= N; i++)
	{
		if (!visited[i])
		{
			DFS(i);
			c++;
		}
	}

	cout << c << '\n';
	return 0;
}
