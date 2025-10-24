#include <iostream>    
#include <string>
#include <queue>
#include <vector>
#include <tuple>
#include <algorithm>
#include <climits>

#define INF 1e9
using namespace std;

void dijkstra(int Start)
{

}
 
int main()
{
	int V, E;
	cin >> V >> E;
	int Start;
	cin >> Start;

	vector<vector<pair<int, int>>> graph(V + 1);
	for (int i = 0; i < E; i++)
	{
		int num, v, w;
		cin >> num >> v >> w;
		graph[num].push_back({ v, w });
	}

	vector<int> dist(V + 1, INF);
	dist[Start] = 0;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	pq.push({ 0, Start});

	while (!pq.empty())
	{
		int d = pq.top().first;
		int n = pq.top().second;
		pq.pop();

		if (d > dist[n])
			continue;

		for (auto edge : graph[n])
		{
			int v = edge.first;
			int w = edge.second;
			if (dist[n] + w < dist[v])
			{
				dist[v] = dist[n] + w;
				pq.push({ dist[v], v });
			}
		}
	}

	for (int i = 1; i <= V; i++)
	{
		if (dist[i] == INF)
			cout << "INF" << "\n";
		else
			cout << dist[i] << "\n";
	}
	return 0;
}
