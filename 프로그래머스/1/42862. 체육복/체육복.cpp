#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n - lost.size();
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    // 여벌을 가져왔는데 본인도 도난당해서 못빌려주는 인원 제외
    for (auto& l : lost)
    {
        auto it = lower_bound(reserve.begin(), reserve.end(), l);
        if (it != reserve.end() && *it == l)
        {
            answer++;
            reserve.erase(it);
            l = -1;
        }
    }
    

    
    for (auto& l : lost)
    {
        // 도난당한 학생의 앞 번호 뒷 번호 학생이 여벌 체육복 있는지 확인
        auto prev = lower_bound(reserve.begin(), reserve.end(), l - 1);
        auto next = lower_bound(reserve.begin(), reserve.end(), l + 1);
        // 앞번호 학생이 있다면 앞번호 부터 빌리기 
        if (prev != reserve.end() && *prev == l - 1) // 잃어버린 학생 앞 번호가 가지고 여벌이 있다면
        {
            answer++;
            reserve.erase(prev);
        }
        else if (next != reserve.end() && *next == l + 1) // 앞번호 학생이 없으면 뒷 번호한테 빌리기
        {
            answer++;
            reserve.erase(next);
        }
    }
    return answer;
}