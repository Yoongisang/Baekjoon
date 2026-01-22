#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
   
    int answer = 0;
    int l = p.size();

    for (int i = 0; i <= t.size() - l; ++i)
    {
        string s = t.substr(i, l);
        
        if (s <= p)
            answer++;
    }
    return answer;
}