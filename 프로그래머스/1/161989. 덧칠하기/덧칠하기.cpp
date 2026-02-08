#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int start = 0;
    
    if (m == 1)
        return section.size();
    
    for (auto& s : section)
    {
        if (s > start)
        {
            answer++;
            start = s + m - 1;
        }  
    }
    return answer;
}
