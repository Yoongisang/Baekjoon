#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> arr) {
    int answer = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        int a = max(answer, arr[i]);
        int b = min(answer, arr[i]);
        while (a % b != 0)
        {
            int temp_a = a % b;
            int temp_b = b;
            a = max(temp_a, temp_b);
            b = min(temp_a, temp_b);
        }
        answer = answer / b * arr[i];
    }
    return answer;
}