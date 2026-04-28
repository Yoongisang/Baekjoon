#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
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
    for (int i = 1; i < progresses.size(); i++)
    {
        if (progresses[i] > max)
        {
            max = progresses[i];
            answer.emplace_back(count + 1);
            count = 0;
        }
        else
            count++;
    }
    answer.emplace_back(count + 1);

    return answer;
}