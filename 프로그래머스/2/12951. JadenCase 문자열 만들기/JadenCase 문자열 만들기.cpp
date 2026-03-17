#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    bool neworld = true;
    for (auto& c : s)
    {
        if (c == ' ')
            neworld = true;
        else 
        {
            c = neworld ? toupper(c) : tolower(c);
            neworld = false;
        }
    }
    return s;
}