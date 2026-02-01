#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> honor;
    for (auto& s : score)
    {
        honor.emplace_back(s);
        sort(honor.begin(), honor.end(), greater<int>());
        if (honor.size() > k)
        {
            answer.emplace_back(honor[k-1]);
        }
        else
        {
            answer.emplace_back(honor.back());
        }
    }
    return answer;
}