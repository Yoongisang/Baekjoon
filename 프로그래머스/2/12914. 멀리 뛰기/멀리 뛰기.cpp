#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    
    long long a = 1, b = 2, c = 0;
    
    for (int i = 3; i <= n; i++)
    {
        c = (a + b) % 1234567;
        a = b;
        b = c;
    }
    return c;
}
