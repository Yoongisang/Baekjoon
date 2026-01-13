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
            phone_number[i] = '*';
        }
    }
    
    answer = phone_number;
    return answer;
}