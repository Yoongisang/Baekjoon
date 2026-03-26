#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    for (int i = 0; i < s.size(); i++)
    {
        stack<char> pair;
        bool complete = true;
        for (int j = i; j < i + s.size(); j++)
        {  
            int num = j % s.size();
            if (s[num] == '(' || s[num] == '[' || s[num] == '{')
            {
                pair.push(s[num]);
            }
            else
            {
                if (pair.empty()) 
                {
                    complete = false;
                    break;
                }
                if (pair.top() == '(' && s[num] == ')' || 
                    pair.top() == '[' && s[num] == ']' || 
                    pair.top() == '{' && s[num] == '}')
                {
                    pair.pop();
                }
                else
                {
                    complete = false;
                    break;
                }
            }
        }
        if (complete && pair.empty())
            answer++;
    }
    return answer;
}