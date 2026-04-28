#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    map<int, int> m;
    for (int i = 0; i < progresses.size(); i++)
    {
        int temp;
        temp = 100 - progresses[i];
        if (temp % speeds[i] > 0)
        {
            progresses[i] = (temp / speeds[i]) + 1;
        }
        else
        {
            progresses[i] = temp / speeds[i];
        }
    }
    
    int count = 0;
    int max = progresses[0];
    for (int i = 0; i < progresses.size(); i++)
    {
        if (i > 0)
        {
            if (progresses[i] > progresses[i - 1] && progresses[i] > max)
            {
                max = progresses[i];
                count++;
            }
        }
        m[count]++;
    }
    for (const auto& it : m)
    {
        answer.emplace_back(it.second);
    }
    return answer;
}