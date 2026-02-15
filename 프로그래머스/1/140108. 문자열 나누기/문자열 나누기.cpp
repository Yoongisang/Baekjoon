#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string s) {
    char c = '\0';
    int answer = 0, count = 0, count_x = 0, index = 1;
    map<int, string> m;
    

    for (auto& str : s)
    {
        if (c == '\0')
            c = str; 

        if (str == c)
        {
            count++;
            m[index] += str;
        }
        else
        {
            count_x++;
            m[index] += str;
            if (count == count_x)
            {
                index++;
                count = 0;
                count_x = 0;
                c = '\0';
                answer++;
            }
        }
    }
    answer = m.size();
    return answer;
}