#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> str = {"aya", "ye", "woo", "ma"};

    for (auto& b : babbling)
    {   
        string prev;
        int i = 0;
        bool valid = true;
        while ( i < b.size())
        {
            bool matched = false;
            for (auto& s : str)
            {
                if (b.substr(i, s.size()) == s && s != prev)
                {
                    prev = s;
                    i += s.size();
                    matched = true;
                    break;
                }
            }
            if (!matched)
            {
                valid = false;
                break;
            }
        }
        if (valid)
        {
            answer++;
        }
    }
    return answer;
}