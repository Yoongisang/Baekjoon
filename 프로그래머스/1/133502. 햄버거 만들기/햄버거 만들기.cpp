#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> v = { -1 };
    
    for (const auto& i : ingredient)
    {
        
        if (v.back() == 1 && i == 2)
        {
            v.back() = 12;
        }
        else if (v.back() == 12 && i == 3)
        {
            v.back() = 123;
        }
        else if(v.back() == 123 && i == 1)
        {
            v.pop_back();
            answer++;
        }
        else
        {
            v.emplace_back(i);
        }
    }

    return answer;
}