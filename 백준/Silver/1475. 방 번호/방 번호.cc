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
	char n[8];
	vector<int> num;
	vector<int> maxnum(10);


	cin >> n;

	for (int i = 0; i < 8; i++)
	{
		if (n[i] == '\0')
		{
			break;
		}
		num.push_back(n[i] - '0');
	}

	for (int i = 0; i <= 9; i++)
	{
		int temp = count(num.begin(), num.end(), i);
		maxnum[i] = temp;

	}


	double temp = maxnum[6] + maxnum[9];
	
	maxnum[6] = round(temp / 2);
	maxnum[9] = 0;
	
	cout << *max_element(maxnum.begin(), maxnum.end());

	return 0;
}
