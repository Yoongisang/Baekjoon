#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss(s);
    string token;
    while (getline(ss, token, ' '))
    {
        if (!token.empty() && isalpha(token[0]))
        {
            token[0] = toupper(token[0]);
            transform(token.begin() + 1, token.end(), token.begin() + 1, ::tolower);
            answer += token;
          
        }
        else if (!token.empty())
        {
            transform(token.begin(), token.end(), token.begin(), ::tolower);
            answer += token;
        }
  
        answer += ' ';
    }
    
    answer.pop_back();
    if (s.back() == ' ' && answer.back() != ' ')
    answer += ' ';
    return answer;
}