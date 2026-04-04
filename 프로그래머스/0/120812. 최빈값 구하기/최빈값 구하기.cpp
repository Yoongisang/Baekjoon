#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int count = 0;
    unordered_map<int, int> m;
   
    for (const int& a : array)
    {
        m[a]++;
    }
    
    auto max_num = max_element(m.begin(), m.end(), [](auto a, auto b) { return a.second < b.second; } );
    
    for (const auto list : m)
    {
        if (max_num->second == list.second)
        {
            count++;
        }
    }
    
    if (count == 1)
    {
        return max_num->first;
    }
    else
    {
        return -1;
    }
}