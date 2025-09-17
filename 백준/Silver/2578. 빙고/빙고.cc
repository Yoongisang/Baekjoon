#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
#include <stack>
#include <queue>
#include <utility>
#include <cmath>
#include <map>
#include <unordered_map>

using namespace std;




int check(int bingo[5][5])
{
	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 5; j++)
		{
			if (bingo[i][j] == 0)
			{
				sum++;
			}

			if (sum == 5)
				count++;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 5; j++)
		{
			if (bingo[j][i] == 0)
			{
				sum++;
			}

			if (sum == 5)
				count++;
		}
	}

	int sum1 = 0;
	for (int i = 0; i < 5; i++)
	{
		
		if (bingo[i][i] == 0)
		{
			sum1++;
		}

		if (sum1 == 5)
			count++;
	}

	int sum2 = 0;
	for (int i = 0; i < 5; i++)
	{
		
		if (bingo[i][4 - i] == 0)
		{
			sum2++;
		}

		if (sum2 == 5)
			count++;
	}

	return count;
		
}

int main() 
{
	int bingo[5][5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> bingo[i][j];
		}
	}

	for (int turn = 0; turn < 25; turn++)
	{
		int answer = 0;
		cin >> answer;

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (bingo[i][j] == answer)
				{
					bingo[i][j] = 0;
					break;
				}
			}
		
		}

		int bingoCount = check(bingo);

		if (bingoCount >= 3)
		{
			cout << turn + 1 << "\n";
			return 0;
		}
	}

	return 0;
}
