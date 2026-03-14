#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size());
    // 신고자 : 신고리스트
    vector<vector<string>> report_list(id_list.size());
    unordered_map<string, int> report_result;
    // 신고 성립 최소 조건
    if (id_list.size() <= k)
        return {0, 0};
    
    // 중복 신고 제거
    sort(report.begin(), report.end());
    report.erase(unique(report.begin(), report.end()), report.end());

    for (int i = 0; i < id_list.size(); i++)
    {
        report_list[i].emplace_back(id_list[i]);
    }
    
    for (const auto& re : report)
    {
        stringstream ss(re);
        string key, value;
        ss >> key >> value;
        
        for (auto& list : report_list)
        {
            if (list[0] == key)
            {
                list.emplace_back(value);
                report_result[value]++;
            }
        }
    }
    
    for (int i = 0; i < id_list.size(); i++)
    {
        for (int j = 1; j < report_list[i].size(); j++)
        {
            if (report_result[report_list[i][j]] >= k)
            {
                answer[i]++;
            }
        }
    }

    

    
    return answer;
}