#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
#include <stack>

using namespace std;

int main() 
{
    char a[13];
    int m = 0;
	int sum = 0;
	int anser = 0;
    int n = 0;

    for (int i = 0; i < 13; i++)
    {
        cin >> a[i];
        
    }

    for (int i = 0; i < 12; i++)
    {
        int temp = 0;
        if (a[i] != '*')
        {
            temp = a[i] - '0';
        }
        else
        {
            n = i;
        }

        if (i % 2 == 0)
        {
            sum += temp;
        }
        else
        {
            sum += temp * 3;
        }
    }

	m = a[12] - '0';

    if (n % 2 == 0)
    {
 
        for (anser = 0; anser <= 9; anser++)
        {
            if ((sum + anser) % 10 == (10 - m) % 10)
            {
                break;
            }
		}
	}
    else
    {
        for (anser = 0; anser <= 9; anser++)
        {

            if ((sum + (anser * 3)) % 10 == (10 - m) % 10)
            {
                break;
            }
        }
    }

	cout << anser << endl;
    return 0; 
}
