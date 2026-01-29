#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    map<char, int> m;
    
    for (int i = 0; i < s.size(); i++)
    {
        if (m.count(s[i]))
        {
            answer.emplace_back(i - m[s[i]]);
        }
        else
        {
            
            answer.emplace_back(-1);
        }
        m[s[i]] = i;

    }
    return answer;
}