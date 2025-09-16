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
	int n = 0;
	cin >> n;

	vector<int> memo(3);
	for (int i = 0; i < n; i++)
	{
		int R = 0;
		int G = 0;
		int B = 0;

		cin >> R >> G >> B;

		if (i == 0)
		{
			memo[0] = R;
			memo[1] = G;
			memo[2] = B;
		}
		else
		{
			vector<int> newMemo(3);
			newMemo[0] = R + min(memo[1], memo[2]);
			newMemo[1] = G + min(memo[0], memo[2]);
			newMemo[2] = B + min(memo[0], memo[1]);
			memo = newMemo;
		}
	}

	cout << min(memo[0], min(memo[1], memo[2])) << "\n";
	return 0;
}
