#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    int N = discount.size() - 9;
    vector<unordered_map<string, int>> list(N);

    for (int i = 0; i < N; i++)
    {
        bool want_num = true;
        for (int j = i; j < i + 10; j++)
        {
            list[i][discount[j]]++;
        }
        
        for (int j = 0; j < want.size(); j++)
        {
            string temp = want[j];
            if (list[i][temp] < number[j])
            {
                want_num = false;
                break;
            }
        }
        
        if (want_num == true)
            answer++;
    }
    
    return answer;
}