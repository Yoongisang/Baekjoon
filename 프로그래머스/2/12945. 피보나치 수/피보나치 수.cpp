#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int a = 1; 
    int b = 1;
    
    for (int i = 3; i <= n; i++)
    {
        int c = (a + b) % 1234567;
        b = a;
        a = c;
    }

    return a;
}