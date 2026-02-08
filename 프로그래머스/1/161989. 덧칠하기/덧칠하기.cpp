#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int m_size = m;
    // 8 4
    // 8 7 6 5 4 3 2 1
    //     o
    if (m == 1)
        return section.size();
    
    for (int i = section.front(); i <= section.back(); i += m_size)
    {
        if (find(section.begin(), section.end(), i) != section.end())
        {
            answer++;
            m_size = m;
        }
        else
        {
            m_size = 1;
        }
    }
    return answer;
}