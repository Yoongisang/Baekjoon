#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int maxW = 0;
    int maxH = 0;
    for (auto& v : sizes)
    {
        sort(v.begin(), v.end(), greater<>());
        maxW = max(maxW, v[0]);
        maxH = max(maxH, v[1]);
    }
    
    return maxW * maxH;
}