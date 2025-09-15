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

	int n = 0;
	priority_queue<int> q;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
	
		
		if (temp == 0)
		{
			if (q.empty())
			{
				cout << 0 << '\n';
			}
			else
			{
				cout << q.top() << '\n';
				q.pop();
			}
		}
		else
		{
			q.push(temp);
		}
	}



	return 0;
}
