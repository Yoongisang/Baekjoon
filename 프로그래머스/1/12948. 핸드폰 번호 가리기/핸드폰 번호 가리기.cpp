#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int length = phone_number.size();
    for (int i = 0; i < length; ++i)
    {
        if (i < length - 4)
        {
            answer.push_back('*');
        }
        else
        {
            answer.push_back(phone_number[i]);
        }
    }
    return answer;
}