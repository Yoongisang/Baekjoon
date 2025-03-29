#include <iostream>

using namespace std;

int main()
{
    int N, M;
    int sum = 0;
    cin >> N >> M;
    char* OX = new char[M];

    for (int i = 0; i < N; i++)
    {
        int count = 0;
        for (int j = 0; j < M; j++)
        {
            cin >> OX[j];
            if (OX[j] == 'O')
            {
                count++;
            }
        }
        if (count > M / 2)
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}