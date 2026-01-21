#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    string s;
    int answer;
    while (n != 0)
    {
        int temp = n % 3;
        s.push_back(temp + '0');
        n /= 3;
    }

    int base = 1;
    
    for (int i = s.size() - 1; i >= 0; --i)
    {
        answer += (s[i] - '0') * base;
        base *= 3;
    }
    
    return answer;
}