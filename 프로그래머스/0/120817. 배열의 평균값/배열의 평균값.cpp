#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = double (numbers.front() + numbers.back()) / 2;
    return answer;
}