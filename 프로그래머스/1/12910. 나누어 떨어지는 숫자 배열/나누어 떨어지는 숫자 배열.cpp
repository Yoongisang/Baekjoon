#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    sort(arr.begin(), arr.end());
    
    for (auto& a : arr)
    {
        if (a % divisor == 0)
        {
            answer.emplace_back(a);
        }
    }
    
    return answer.empty() ? vector<int>(1, -1) : answer;
}