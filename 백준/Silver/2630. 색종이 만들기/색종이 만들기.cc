// 실버2 2630번 색종이만들기(정복 분할)
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> V;
int countW = 0;
int countB = 0;

void solve(int x, int y, int size)
{
	int B = 0;
	int W = 0;

	for (int i = x; i < x + size; i++)
	{
		for (int j = y; j < y + size; j++)
		{
			if (V[i][j] == 1)
			{
				B++;
			}
			else
			{
				W++;
			}
		}
	}

	if (B == size * size)
	{
		countB++;
		return;
	}
	else if (W == size * size)
	{
		countW++;
		return;
	}

	int half = size / 2;

	solve(x, y, half);
	solve(x, y + half, half);
	solve(x + half, y, half);
	solve(x + half, y + half, half);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	V.resize(N + 1, vector<int>(N + 1));

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> V[i][j];
		}
	}

	solve(1, 1, N);

	cout << countW << '\n' << countB << '\n';
	return 0;
}
