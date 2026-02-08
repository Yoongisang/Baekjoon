#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 1;
    int start = section.front();
    
    if (m == 1)
        return section.size();
    
    for (auto& s : section)
    {
        if (s < start + m)
        {
            continue;
        }

        start = s;
        answer++;
    }
    return answer;
}