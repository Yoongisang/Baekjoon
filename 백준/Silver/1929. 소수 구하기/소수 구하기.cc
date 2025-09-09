#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
#include <stack>
#include <queue>
#include <cmath>

using namespace std;

int main() 
{
    int M, N = 0;
    cin >> M >> N;

    bool arr[1000001] = { false, };

    arr[0] = arr[1] = true;

    for (int i = 2; i * i <= N; i++)
    {
        if (arr[i] == true)
            continue;
        else
        {
            for (int j = 2; j * i <= N ; j++)
            {
                arr[i * j] = true;
            }
        }
    }

    for (int i = M; i <= N; i++)
    {
        if (!arr[i])
            cout << i << '\n';
    }

  
    return 0; 
}
