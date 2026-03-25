#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    unordered_map<int, int> list;
    
    for (const auto& t : tangerine)
    {
        list[t]++;
    }
    
    vector<pair<int, int>> num_list(list.begin(), list.end());
    sort(num_list.begin(), num_list.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });
    
    for (const auto& l : num_list)
    {
        if (k <= 0)
            break;
        
        k -= l.second;
        answer++;
    }
    return answer;
}
