#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int l = s.size();
    return s.substr((l - 1) / 2, 2 - (l % 2));
}