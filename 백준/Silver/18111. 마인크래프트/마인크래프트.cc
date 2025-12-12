#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, B;

    cin >> N >> M >> B;
    vector<vector<int>> v(N, vector<int>(M));

    //  주어진 땅의 높이 입력
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> v[i][j];
        }
    }

    //  0부터 시작해서 가장 높은 땅의 갯수 까지
    int H = 0;
    // 최종 높이
    int resultH;
    //  걸리는 시간 
    int T = 1e9;
    //  주어진 땅의 높이와 가지고있는 블록의 갯수를 이용해서 가능한 땅의 높이를 전부 구한다
    while (H <= 256)
    {
        int tempT = 0;
        int tempB = B;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (H < v[i][j])
                {
                    int diff = v[i][j] - H;
                    tempT += diff * 2;
                    tempB += diff;
                }
                if (H > v[i][j])
                {
                    int diff = H - v[i][j];
                    tempT += diff;
                    tempB -= diff;
                }
            }
        }

        if (tempB >= 0 && tempT <= T)
        {
            T = min(T, tempT);
            resultH = H;
        }

        H++;
    }

    cout << T << " " << resultH << '\n';

    return 0;
}