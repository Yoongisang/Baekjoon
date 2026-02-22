#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    for (auto& t : targets)
    {
        int sum = 0;
        for (int i = 0; i < t.size(); i++)
        {
            int num = -1;
            for (auto& key : keymap)
            {
                auto it = find(key.begin(), key.end(), t[i]);
                int n;
                if (it != key.end())
                {
                    n = it - key.begin() + 1;
                    if (num == -1)
                    {
                        num = n;
                    }
                    num = min(num, n);
                }
            }
            if (num == -1)
            {
                sum = num;
                break;
            }
            sum += num;
        }
        answer.emplace_back(sum);
    }
    
    return answer;
}