// 실버4 11047번 동전0
#include <iostream>
#include <stack>
#include <algorithm> 

using namespace std;


int main()
{
	int N, K;
	int c = 0;
	cin >> N >> K;

	stack<int> A;
	
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		A.push(temp);
	}

	while (K > 0 && !A.empty())
	{
		if (A.top() < K)
		{
			K -= A.top();
			c++;
		}
		else if (A.top() == K)
		{
			K -= A.top();
			c++;
			break;
		}
		else
		{
			A.pop();
		}
	}

	cout << c << '\n';

	return 0;
}
