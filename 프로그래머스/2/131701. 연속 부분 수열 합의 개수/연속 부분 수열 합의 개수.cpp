#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
#include <numeric>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    int i = 0;
    unordered_map<int, int> c;
    // 7 9 1 1 4
    while (i < elements.size())
    {
        int j = 0;
        vector<int> temp;
        while (j < elements.size())
        {
            temp.emplace_back(elements[(i + j) % elements.size()]);
            c[accumulate(temp.begin(), temp.end(), 0)]++;
            j++;
        }
        cout << '\n';
        i++;
    }
    answer = c.size();
    return answer;
}