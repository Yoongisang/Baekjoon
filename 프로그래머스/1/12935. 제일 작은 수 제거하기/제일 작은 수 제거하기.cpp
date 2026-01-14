#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    auto minIt = arr.begin();
    for (auto it = arr.begin(); it < arr.end(); ++it)
    {
       if (*it < *minIt)
       {
           minIt = it;
       }
    }
    
    arr.erase(minIt);
    answer = arr;
    if (answer.empty())
    {
        return vector<int>(1, -1);
    }
    
    return answer;
}