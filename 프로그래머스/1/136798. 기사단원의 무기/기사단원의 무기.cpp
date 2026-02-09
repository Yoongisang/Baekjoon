#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for (int i = 1; i <= number; i++)
    {
        int temp = 0;

        if (i == 1)
        {
            answer++;
            continue;
        }
        
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                if (j * j == i)
                    temp++;
                else
                    temp += 2;
            }
        }
        
        if (temp <= limit)
            answer += temp;
        else
            answer += power;
    }
    return answer;
}