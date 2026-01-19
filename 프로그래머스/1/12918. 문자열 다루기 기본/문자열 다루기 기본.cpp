#include <string>
#include <vector>

using namespace std;

bool solution(string s) {

    if (s.size() != 4 && s.size() != 6)
    {
        return false;
    }
    
    for (auto& str : s)
    {
        if (isdigit(str) == false)
        {
            return false;
        }
    }
    return true;
}