#include <string>
#include <vector>
#include <cctype>  

using namespace std;

string solution(string s) {
    int count = 0;
    for (auto& c : s)
    {
        if (c == ' ')
        {
            count = 0;
        }
        else
        {
            if (count % 2 == 0)
            {
                c = toupper(c);
            }
            else
            {
                c = tolower(c);
            }
            count++;
        }
    }
    return s;
}
