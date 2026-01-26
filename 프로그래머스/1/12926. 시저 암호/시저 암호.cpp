#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (s[i] + n > 'z')
            {
                s[i] = s[i] + n - 26;
            }
            else
            {
                s[i] += n;
            }
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (s[i] + n > 'Z')
            {
                s[i] = s[i] + n - 26;
            }
            else
            {
                s[i] += n;
            }
        }
    }
    
    return s;
}