#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int idx = 0;
    int idx2 = 0;

    for (auto& g : goal)
    {
        if (cards1[idx] == g)
        {
            idx++;
        }
        else
        {
            if (cards2[idx2] == g)
            {
                idx2++;
            }
            else
            {
                return "No";
            }
        }
    }
    return answer;
}