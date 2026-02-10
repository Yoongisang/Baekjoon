#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int rank[7] = {6, 6, 5, 4, 3, 2, 1};
    int max = 0;
    int min = 0;
    for (auto& l : lottos)
    {
        if (l == 0)
        {
            max++;
        }
        else
        {
            if (find(win_nums.begin(), win_nums.end(), l) != win_nums.end())
            {
                min++;
            }
        }
    }
    
    answer.emplace_back(rank[min+max]);
    answer.emplace_back(rank[min]);

    return answer;
}