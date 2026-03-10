#include <string>
#include <vector>
#include <map>

using namespace std;
// survey { RT, TR, FC, CF, MJ, JM, AN, NA}
// R / T, C / F, J / M, A / N 
string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    vector<string> list = { "RT", "CF", "JM", "AN"};
    map<char, int> m;
    
    for (int i = 0; i < survey.size(); i++)
    {
        if (choices[i] < 4) 
        {
            m[survey[i][0]] += 4 - choices[i];
        }
        else 
        {
            m[survey[i][1]] += choices[i] - 4;
        }
    }
    
    for (const auto& l : list)
    {
        if (m[l[0]] >= m[l[1]])
        {
            answer += l[0];
        }
        else
        {
            answer += l[1];
        }
    }
 
    return answer;
}