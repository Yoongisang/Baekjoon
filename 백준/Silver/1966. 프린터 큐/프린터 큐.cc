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
    int t = 0;
    int N = 0;
    int M = 0;
    int p = 0;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        queue<pair<int, int>> q;

        cin >> N >> M;

        for (int i = 0; i < N; i++)
        {
            cin >> p;
            q.push(pair<int, int>(i, p));

        }

        int priority = 9;
        int num = 0;
        bool result = true;
        while (result)
        {
            bool found = false;
            int queueSize = q.size();
            for (int j = 0; j < queueSize; j++)
            {
                if (q.front().second == priority)
                {
                    if (q.front().first == M)
                    {
                        num++;
                        cout << num << '\n';
                        result = false;
                        break;
                    }
                    else
                    {
                        q.pop();
                        num++;
                        found = true;
                        break;
                    }
                }
                else
                {
                    pair<int, int> temp = q.front();
                    q.pop();
                    q.push(temp);
                }
            }

            if (!found)
            {
                priority--;
            }
        }
    }
    return 0; 
}
