#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    int i = 0;
    unordered_set<int> c;

    while (i < elements.size())
    {
        int j = 0;
        int sum = 0;
        while (j < elements.size())
        {
            sum += elements[(i + j) % elements.size()];
            c.insert(sum);
            j++;
        }
        i++;
    }
    answer = c.size();
    return answer;
}
