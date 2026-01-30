#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    int l = food.size();
    for (int i = 1; i < l; i++)
    {
        int count = food[i] / 2;
        for (int j = 0; j < count; j++)
        {
            answer += to_string(i);
        }
    }
    
    string temp(answer.rbegin(), answer.rend());
    
    answer += "0" + temp;
    
    return answer;
}