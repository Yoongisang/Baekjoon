#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    auto max_it = max_element(priorities.begin(), priorities.end());
    int max_num = *max_it;
    queue<pair<int, int>> q;
    
    for (int i = 0; i < priorities.size(); i++)
    {
        q.push({priorities[i], i});
    }
    
    while (!q.empty())
    {
        auto [num, idx] = q.front();
        q.pop();
        if (num < max_num)
        {
            q.push({num, idx});
        }
        else
        {
            priorities.erase(max_it);
            max_it = max_element(priorities.begin(), priorities.end());
            max_num = *max_it;
            answer++;
            if (idx == location)
                break;
        }
        
    }
    return answer;
}