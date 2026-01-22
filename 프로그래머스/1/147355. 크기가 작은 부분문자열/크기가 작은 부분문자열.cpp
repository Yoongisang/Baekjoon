#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
   
    int answer = 0;
    int l = p.size();
    answer = 0;
    for (int i = 0; i < t.size() - l + 1; ++i)
    {
        int temp_t = 0;
        int temp_p = 0;
        
        string s = "";
        
        for (int j = i; j < i + l; ++j)
        {
            s += t[j];
        }
        
        
        if (s <= p)
            answer++;
    }
    return answer;
}