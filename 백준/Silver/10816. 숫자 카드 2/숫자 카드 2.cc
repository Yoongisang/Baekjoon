#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	cin >> N;

	unordered_map<int, int> freq;

	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		freq[x]++;
	}

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int x;
		cin >> x;
		cout << freq[x] << " ";
	}
	return 0;
}