#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int lcm = n * m; 
    int gcd;
    while (m != 0)
    {
        int temp = m;
        m = n % m;
        n = temp;
    }
    gcd = n;
    lcm = lcm / gcd;
    answer.push_back(gcd);
    answer.push_back(lcm);
    return answer;
}