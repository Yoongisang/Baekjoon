#include <string>
#include <vector>

using namespace std;

int solution(string word) {
    int answer = 0;
    string alpha = { 'A', 'E', 'I', 'O', 'U' };
    int weights[5] = {781, 156, 31, 6, 1};
    
    for (int i = 0; i < word.size(); i++)
    {
        int temp = alpha.find(word[i]);
        answer += temp * weights[i] + 1;
    }
    return answer;
}