#include <iostream>    
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	cin >> N;
	priority_queue<int> maxHeap;
	priority_queue<int, vector<int>, greater<int>> minHeap;

	for (int i = 0; i < N; i++)
	{
		int temp = 0;
		cin >> temp;
		if (maxHeap.empty())
		{
			maxHeap.push(temp);
		}
		else if (temp <= maxHeap.top())
		{
			maxHeap.push(temp);
		}
		else
		{
			minHeap.push(temp);
		}

		if (maxHeap.size() > minHeap.size() + 1)
		{
			minHeap.push(maxHeap.top());
			maxHeap.pop();
		}
		else if (minHeap.size() > maxHeap.size())
		{
			maxHeap.push(minHeap.top());
			minHeap.pop();
		}
		cout << maxHeap.top() << "\n";
	}

	return 0;
}

