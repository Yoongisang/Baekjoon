#include <string>
#include <vector>
#include <cctype>

using namespace std;

int solution(string s) {
    int answer = 0;
    string list[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string num = "";
    string temp_s = "";
    
    for (auto& str : s)
    {
        
        if (isalpha(str))
        {
            temp_s += str;
            for (int i = 0; i <= 9; i++)
            {
                if (temp_s == list[i])
                {
                    num += to_string(i);
                    temp_s = "";
                }
            }
        }
        else if (isdigit(str))
        {
            num += str;
        }
        
     
    }
    answer = stoi(num);
    return answer;
}