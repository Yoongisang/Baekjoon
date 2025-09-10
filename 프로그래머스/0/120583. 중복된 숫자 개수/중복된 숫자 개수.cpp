#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int arraay_size = array.size();
        for (int i = 0; i < arraay_size; i++)
        {
            if (array[i] == n)
            {
                answer++;
            }
        }
    return answer;
}