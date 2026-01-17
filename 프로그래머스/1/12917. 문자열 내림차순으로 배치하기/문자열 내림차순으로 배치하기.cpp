#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    sort(begin(s), end(s), greater());
    return s;
}