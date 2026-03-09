#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> num = {1, 2, 3, 1};
    
    if (ingredient.size() < 4)
        return 0;
    
    for (int i = 0; i <= (int)ingredient.size() - 4; i++)
    {
        vector<int> temp = {ingredient[i], ingredient[i + 1], ingredient[i + 2], ingredient[i + 3]};
        if (temp == num)
        {
            answer++;
            ingredient.erase(ingredient.begin() + i, ingredient.begin() + i + 4);
            i = max(-1, i - 5); 
        }
    }
    return answer;
}