#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    
    for (auto& it : commands)
    {
        temp = array;

        sort(temp.begin() + it[0] -1, temp.begin() + it[1]);
        answer.emplace_back(temp[it[0] + it[2] - 2]);
    }
    return answer;
}