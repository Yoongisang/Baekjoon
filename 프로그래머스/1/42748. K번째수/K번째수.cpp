#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (auto& it : commands)
    {
        vector<int> temp;
        for (int i = it[0] - 1; i <= it[1] -1; i++)
        {
            temp.emplace_back(array[i]);
        }
        sort(temp.begin(), temp.end());
        answer.emplace_back(temp[it[2] - 1]);
    }
    return answer;
}