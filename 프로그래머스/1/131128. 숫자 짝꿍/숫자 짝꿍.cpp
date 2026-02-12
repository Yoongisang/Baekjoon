#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    string str = X + Y;
    char prev;
    sort(str.begin(), str.end(), greater<>());
    for (auto& s : str)
    {
        if (s == prev)
            continue;
        
        int x = count(X.begin(), X.end(), s);
        int y = count(Y.begin(), Y.end(), s);
        for (int i = 0; i < min(x,y); i++)
        {
            prev = s;
            answer += s;
        }
    }
    if (answer == "")
        answer = "-1";
    if (all_of(answer.begin(), answer.end(), [](char c){ return c == '0'; }))
        answer = "0";
    return answer;
}