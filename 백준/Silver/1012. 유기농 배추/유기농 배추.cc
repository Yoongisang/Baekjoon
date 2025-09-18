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

int M, N, K = 0;
int c = 0;
int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };

void dfs(int x, int y, vector<vector<int>>& graph, vector<vector<bool>>& visited)
{
	visited[x][y] = true;

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= N || ny < 0 || ny >= M)
			continue;

		if (graph[nx][ny] == 1 && !visited[nx][ny])
			dfs(nx,ny,graph, visited);
	}
}
int main()
{
	int t = 0;
	cin >> t;

	for (int i = 0; i < t; i++)
	{

		cin >> M >> N >> K;
		vector<vector<int>> cabbage(N, vector<int>(M));
		vector<vector<bool>> visited(N, vector<bool>(M));

		for (int j = 0; j < K; j++)
		{
			int x, y;
			cin >> x >> y;
			cabbage[y][x] = 1;
		}

		for (int j = 0; j < N; j++)
		{
			for (int l = 0; l < M; l++)
			{
				if (cabbage[j][l] == 1 && !visited[j][l])
				{
					dfs(j, l, cabbage, visited);
					c++;
					
					
				}
				
			}
			
		}
		cout << c << "\n";
		c = 0;
		
	}
	return 0;
}


