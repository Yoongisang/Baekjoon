#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    // 1 2 3 4
    // 2 2 3 4
    // 3 3 3 4
    // 4 4 4 4
    // 1 2 3 4 | 5 6 7 8 | 9 10 11 12 | 13 14 15
    // 1 2 3 4 | 2 2 3 4 | 3  3  3  4 |  4  4  4
    // 1 2 3 4 | 1 2 3 4 | 1  2  3  4 |
    // i = i % n == 0 ? n : i % n
    for (long long i = left + 1; i <= right + 1; i ++)
    {
        if (i % n == 0)
        {
            answer.emplace_back(n);
        }
        else
        {
            if (i % n < (i / n) + 1)
            {
                answer.emplace_back((i / n) + 1);
            }
            else
            {
                answer.emplace_back(i % n);
            }
        }
    }
    return answer;
}