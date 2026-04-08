#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    int N = discount.size() - 9;
    unordered_map<string, int> window;
    for (int i = 0; i < 10; i++)
    {
        window[discount[i]]++;
    }
    
    for (int i = 0; i < N; i++)
    {
        bool want_num = true;
        for (int j = 0; j < want.size(); j++)
        {
            if (window[want[j]] < number[j])
            {
                want_num = false;
                break;
            }
        }
        if (want_num == true)
            answer++;
        if (i + 10 < discount.size())
        {
            window[discount[i]]--;
            window[discount[i + 10]]++;
        }
    }
    return answer;
}