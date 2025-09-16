#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
#include <stack>
#include <queue>
#include <utility>
#include <cmath>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void dfs(int node)
{
	visited[node] = true;
	cout << node << " ";

	for (int next : graph[node])
	{
		if (!visited[next])
		{
			dfs(next);
		}
	}
}

void bfs(int start)
{
	queue<int> q;
	visited[start] = true;
	q.push(start);
	int count = 0;
	while (!q.empty())
	{
		int current = q.front();
		q.pop();
		//cout << current << " ";
		count++;
		for (int next : graph[current])
		{
			if (!visited[next])
			{
				visited[next] = true;
				q.push(next);
			}
		}
	}
	cout << count - 1 << "\n";
}
int main() 
{
	int N, M;
	cin >> N >> M;
	graph.resize(N + 1);

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for (int i = 0; i <= N; i++)
	{
		sort(graph[i].begin(), graph[i].end());

	}

	//visited.assign(N + 1, false);
	//dfs(1);
	//cout << "\n";

	visited.assign(N + 1, false);
	bfs(1);
	cout << "\n";

	return 0;
}
