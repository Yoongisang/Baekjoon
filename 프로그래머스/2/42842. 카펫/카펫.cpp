#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    for (int i = 1;  i * i <= yellow; i++)
    {
        int x;
        int y;
        int sum;
        if (yellow % i == 0)
        {
            y = i + 2;
            x = (yellow / i) + 2;
            sum = (x + y) * 2 - 4;
            if (sum == brown)
            {
                answer.emplace_back(x);
                answer.emplace_back(y);
            }
        }
        
    }
    return answer;
}