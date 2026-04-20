#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> m;
    
    for (const auto& c : clothes)
    {
        m[c[1]]++;
    }
    
    for (const auto& it : m)
    {

        answer *= it.second + 1;

    }
    
    answer -= 1;
    
    return answer;
}