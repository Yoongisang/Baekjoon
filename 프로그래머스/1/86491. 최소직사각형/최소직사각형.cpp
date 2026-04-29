#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int maxw = 0;
    int maxh = 0;
    for (const auto& size : sizes)
    {
        maxw = max(maxw, max(size[0], size[1]));
        maxh = max(maxh, min(size[0], size[1]));
    }
    return maxw * maxh;
}