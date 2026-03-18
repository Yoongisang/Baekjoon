#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2);
    int n = s.size();
    int one = count(s.begin(), s.end(), '1');
    int zero = s.size() - one;
    while (n > 1)
    {
        answer[1] += zero;
        int one_temp = 0;
        int zero_temp = 0;
        
        while (one > 0)
        {
            if (one % 2 == 1)
            {
                one_temp++;
            }
            else
            {
                zero_temp++;
            }
            one /= 2;
        }
        
        one = one_temp;
        zero = zero_temp;
        n = one + zero;
        answer[0]++;
   
    }
    return answer;
}