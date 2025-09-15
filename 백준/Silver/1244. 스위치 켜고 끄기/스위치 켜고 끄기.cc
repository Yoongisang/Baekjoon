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
	int switch_num = 0;
	cin >> switch_num;
	vector<bool> b(switch_num + 1);
	int s_num = 0;


	for (int i = 1; i <= switch_num; i++)
	{
		int insert = 0;
		cin >> insert;
		b[i] = insert;
		//cout << b[i] << endl;
	}

	cin >> s_num;


	for (int i = 0; i < s_num; i++)
	{
		int gender = 0;
		int num = 0;
		cin >> gender >> num;
		
		if (gender == 1)
		{
			for (int j = 1; j <= switch_num / num; j++)
			{
				b[j * num] = !b[j * num];
			}
		}
		else
		{
			for (int j = 1; j <= 50; j++)
			{
				if (num - j == 0 || num + j > switch_num)
					break;
				
				if (b[num - j] == b[num + j])
				{
					b[num - j] = !b[num - j];
					b[num + j] = !b[num + j];
				}
				else
				{
					break;
				}

			}
			b[num] = !b[num];
		}

	}

	for (int i = 1; i <= switch_num; i++)
	{
		
		cout << b[i] << " ";
		if (i % 20 == 0)
		{
			cout << '\n';
		}
	}

	return 0;
}
