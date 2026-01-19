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
        if (str < '0' || str > '9')
        {
            return false;
        }
    }
    return true;
}