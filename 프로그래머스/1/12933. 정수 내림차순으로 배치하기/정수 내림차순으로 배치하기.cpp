#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    string s = to_string(n);
    sort(begin(s), end(s), greater<char>());
    long long answer = 0;
    answer = stoll(s);
    
    return answer;
}