#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

string solution(string s) {
    string answer = "";
    int count = 1;
    for (auto& c : s)
    {
        if (count % 2 != 0)
        {
            answer.push_back(toupper(c));
        }
        else
        {
             answer.push_back(tolower(c));
        }
        count++;
        if (c == ' ')
        {
            count = 1;
        }
    }
    return answer;
}