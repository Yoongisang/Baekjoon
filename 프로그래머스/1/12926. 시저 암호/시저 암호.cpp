#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for (auto& a : s)
    {
        if (a >= 'a' && a <= 'z')
        {
            a = (a - 'a' + n) % 26 + 'a';
        }
        else if (a >= 'A' && a <= 'Z')
        {
            a = (a - 'A' + n) % 26 + 'A';
        }
    }
    
    return s;
}