#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    auto max = max_element(priorities.begin(), priorities.end());
    queue<pair<int, int>> q;
    
    for (int i = 0; i < priorities.size(); i++)
    {
        q.push({priorities[i], i});
    }
    
    while (!q.empty())
    {
        auto [num, idx] = q.front();
        q.pop();
        if (num < *max)
        {
            q.push({num, idx});
        }
        else
        {
            *max  = 0;
            max = max_element(priorities.begin(), priorities.end());
            answer++;
            if (idx == location)
                break;
        }
        
    }
    return answer;
}