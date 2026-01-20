#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int lcd = n * m; 
    int gcd;
    while (m != 0)
    {
        int temp = m;
        m = n % m;
        n = temp;
    }
    gcd = n;
    lcd = lcd / gcd;
    answer.push_back(gcd);
    answer.push_back(lcd);
    return answer;
}