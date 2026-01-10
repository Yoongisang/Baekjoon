#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    string s = to_string(x);
    for (auto& a : s)
    {
        sum += a - '0';
    }
    
    answer = x % sum == 0 ? true : false;
    return answer;
}