#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int maxW = 0;
    int maxH = 0;
    for (auto& v : sizes)
    {
        maxW = max(maxW, max(v[0], v[1]));
        maxH = max(maxH, min(v[0],v[1]));
    }
    
    return maxW * maxH;
}