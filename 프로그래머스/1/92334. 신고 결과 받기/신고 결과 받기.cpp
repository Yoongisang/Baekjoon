#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <sstream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size());
    // 신고자 : 신고리스트

    unordered_map<string, unordered_set<string>> report_list;
    unordered_map<string, int> report_result;
    // 신고 성립 최소 조건
    if (id_list.size() <= k)
        return vector<int>(id_list.size(), 0);

    // 신고자 : 유저 저장
    for (const auto& re : report)
    {
        stringstream ss(re);
        string key, value;
        ss >> key >> value;
        // 자동 중복 제거
        if (report_list[key].insert(value).second)
            report_result[value]++;
    }
    // 신고조건 충족시 
    for (int i = 0; i < id_list.size(); i++)
    {
        for (const auto& reported : report_list[id_list[i]])
        {
            if (report_result[reported] >= k)
            {
                answer[i]++;
            }
        }
    }
    return answer;
}