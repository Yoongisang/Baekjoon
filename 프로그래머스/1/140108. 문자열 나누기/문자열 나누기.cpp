#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string s) {
    char c = '\0';
    int answer = 0, count = 0, count_x = 0, index = 1;
    

    for (auto& str : s)
    {
        if (c == '\0')
            c = str; 

        if (str == c)
        {
            count++;
        }
        else
        {
            count_x++;
            if (count == count_x)
            {
                count = 0;
                count_x = 0;
                c = '\0';
                answer++;
            }
        }
    }
    
    if (count > 0)
        answer++;
    
    return answer;
}