#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    int sum = -1;
    vector<int> day = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> dow = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    
    for (int i = 0; i < a; i++)
    {
        sum += day[i];
    }
 
    return dow[(sum + b) % 7];
}