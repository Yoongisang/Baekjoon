#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int count = 0;
    for (auto& s : seoul)
    {
        if (!s.find("Kim"))
        {
            answer = "김서방은 ";
            answer += to_string(count);
            answer += "에 있다";
        }
        count++;
    }
    return answer;
}