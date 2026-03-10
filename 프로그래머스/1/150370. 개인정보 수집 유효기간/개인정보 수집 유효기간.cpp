#include <string>
#include <vector>
#include <sstream>
#include <cctype>
#include <algorithm>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    string token;
    string day;
    
    stringstream ss(today);
    while (getline(ss, token, '.'))
    {
        day += token;
    }
    
    int count = 1;
    
    for (const auto& p : privacies)
    {
        string p_copy = p;
        for (char& c : p_copy)
        {
            if (c == '.')
                c = ' ';
        }
        
        stringstream ss(p_copy);
        vector<int> p_day(3);
        char p_terms;
        
        ss >> p_day[0] >> p_day[1] >> p_day[2] >> p_terms;

        
        int terms_day = 0;
        for (const auto& t : terms)
        {
            stringstream ss_t(t);
            char t_type;
            int t_month;
            ss_t >> t_type >> t_month;
            if (t_type == p_terms)
            {
                terms_day = t_month;
                break;
            }

        }
        // 오늘 날짜 == now{yyyy,mm,dd}, 약관 날짜 == p_day{yyyy,mm,dd}, 약관 종류 == p_terms, 
        //약관 종류에 따른 기간 == terms_day
        p_day[1] += terms_day;
        p_day[2]--;
        
        if (p_day[2] == 0)
        {
            p_day[1]--;
            p_day[2] = 28;
        }
        
        if (p_day[1] > 12)
        {
            p_day[0] += (p_day[1]) / 12;
            p_day[1] = p_day[1] % 12 ;
        
        }
        
        if (p_day[1] == 0)
        {
            p_day[0]--;
            p_day[1] = 12;
        }
        string p_temp;
        for (int i = 0; i < 3; i++)
        {

            if (p_day[i] < 10)
            {
                p_temp += "0" + to_string(p_day[i]);
            }
            else
                p_temp += to_string(p_day[i]);

        }
        
        if (p_temp < day)
            answer.emplace_back(count);
        count++;
    }
    
    return answer;
}