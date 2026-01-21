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

    answer = stoi(s, nullptr, 3);
    
    return answer;
}