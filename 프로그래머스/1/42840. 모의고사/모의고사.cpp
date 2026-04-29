#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<vector<int>> ans(4);
    ans[1] = { 1, 2, 3, 4, 5 };
    ans[2] = { 2, 1, 2, 3, 2, 4, 2, 5 };
    ans[3] = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    vector<int> score(4, 0);
    
    for (int i = 0; i < answers.size(); i++)
    {
        for (int j = 1; j < 4; j++)
        {
            if (answers[i] == ans[j][i % ans[j].size()])
                score[j]++;
        }
    }
    int max_num = *max_element(score.begin(), score.end());
    for (int i = 1; i < 4; i++)
    {
        if (score[i] == max_num)
            answer.emplace_back(i);
    }
    return answer;
}