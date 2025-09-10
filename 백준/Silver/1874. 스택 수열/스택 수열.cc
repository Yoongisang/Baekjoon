#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
#include <stack>
#include <queue>
#include <utility>

using namespace std;


int main() 
{
	int n = 0;
	int arr = 0;
	int s_num = 1;
	cin >> n;
	vector<int> list(n);
	vector<char> answer;
	stack<int> s;
	
	for (int i = 0; i < n; i++)
	{
		cin >> list[i];

	}

	while (1)
	{
		if (s.empty())
		{
			s.push(s_num);
			//cout << s.top() << '\n';
			answer.push_back('+');
			s_num++;
		}

		if (!(s.top() == list[arr]) && s_num <= n)
		{
			s.push(s_num);
			//cout << s.top() << '\n';
			answer.push_back('+');
			s_num++;
		}

		if (s.top() == list[arr])
		{
			arr++;
			answer.push_back('-');
			s.pop();
			
			if (!s.empty() && s.top() > list[arr])
			{
				cout << "NO" << '\n';
				return 0;
			}
		}
		
		if (arr == n)
		{
			break;
		}
	}
	
	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << '\n';
	}

	return 0;
}
