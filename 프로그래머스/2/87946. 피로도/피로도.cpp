#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer  = 0;
    sort(dungeons.begin(), dungeons.end());
    
    do {
        int hp = k, cnt = 0;
        for (auto& d : dungeons)
        {
            if (hp >= d[0])
            {
                hp -= d[1];
                cnt++;
            }
        }
        answer = max(answer, cnt);
    } while (next_permutation(dungeons.begin(), dungeons.end()));
  
    return answer;
}