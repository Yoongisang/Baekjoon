#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
#include <stack>
#include <queue>
#include <utility>
#include <cmath>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;
	cin >> n;

	priority_queue<int, vector<int>, greater<int>> q;

	for (int i = 0; i < n; i++)
	{
		int input = 0;
		cin >> input;

		if (input == 0 && q.empty())
		{
			cout << "0" << "\n";
		}
		else if (input == 0 && !q.empty())
		{
			cout << q.top() << "\n";
			q.pop();
		}
		else
		{
			q.push(input);
		}
		
	}
	
	return 0;
}
