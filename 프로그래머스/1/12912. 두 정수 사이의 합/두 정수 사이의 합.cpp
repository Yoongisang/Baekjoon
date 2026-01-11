#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long numMin = min(a,b);
    long long numMax = max(a,b);
    
    answer = (numMin + numMax) * (numMax - numMin + 1) / 2;
    
    return answer;
}