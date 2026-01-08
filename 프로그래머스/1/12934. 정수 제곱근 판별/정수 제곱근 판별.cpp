#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = sqrt(n);
    
    return answer * answer == n ? (answer + 1) * (answer + 1) : -1;
}