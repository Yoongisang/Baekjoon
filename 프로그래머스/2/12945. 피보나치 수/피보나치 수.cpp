#include <string>
#include <vector>

using namespace std;

vector<int> v(100001);


int solution(int n) {

    if (n == 3)
    {
        v[1] = 1;
        v[2] = 1;
        v[3] = 2;
        return v[3];
    }
        
    solution(n - 1);
    
    v[n] = (v[n - 1] + v[n - 2]) % 1234567;

    return v[n];
}