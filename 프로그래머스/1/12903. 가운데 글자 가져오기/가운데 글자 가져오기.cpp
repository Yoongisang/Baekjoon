#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int l = s.size();
    if (l % 2 == 0)
    {
        answer.push_back(s[l / 2 - 1]);
        answer.push_back(s[l / 2]);
    }
    else
    {
        answer.push_back(s[l / 2]);
    }
    return answer;
}