#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<string> board(N);
    for (int i = 0; i < N; i++)
    {
        cin >> board[i];
    }

    int ans = 64;

    for (int r = 0; r <= N - 8; r++)
    {
        for (int c = 0; c <= M - 8; c++)
        {
            int cnt1 = 0;
            int cnt2 = 0;
            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    char cur = board[r + i][c + j];
                    char expected1 = ((i + j) % 2 == 0) ? 'W' : 'B';
                    if (cur != expected1) 
                    {
                        cnt1++;
                    }

                    char expected2 = ((i + j) % 2 == 0) ? 'B' : 'W';
                    if (cur != expected2)
                    {
                        cnt2++;
                    }
                }
            }
            ans = min(ans, min(cnt1, cnt2));
        }
    }

    cout << ans;

    return 0;
}