#include <string>
#include <vector>
#include <cctype>
#include <regex>

using namespace std;

int solution(string s) {
    int answer;
    vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    regex r;
    
    for (int i = 0; i < numbers.size(); i++)
    {
        s = regex_replace(s, regex(numbers[i]), to_string(i));
    }
    answer = stoi(s);
    return answer;
}