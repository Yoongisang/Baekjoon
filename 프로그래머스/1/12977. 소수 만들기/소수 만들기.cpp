#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    vector<int> num;
    
    for (int i = 0; i < nums.size() - 2; i++)
    {
        for(int j = i + 1; j < nums.size() - 1; j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                int temp = nums[i] + nums[j] + nums[k];
                num.emplace_back(temp);
            }
        }
    }
    
    for (auto& n : num)
    {
        bool prime = true;
        
        if (n % 2 != 0)
        {
            for(int i = 3; i * i<= n; i += 2)
            {
                if (n % i == 0)
                {
                    prime = false;
                    break;
                }
            }
            
            if (prime == true)
                answer++;
        }
    }
    return answer;
}