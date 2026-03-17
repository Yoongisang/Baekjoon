#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

string solution(string s) {
    vector<int> num;
    string answer = "";
    string token;
    stringstream ss(s);
    
    while (getline(ss, token, ' '))
    {
        num.emplace_back(stoi(token));
    }
    sort(num.begin(), num.end());
    answer += to_string(num.front()) + " " + to_string(num.back());
    return answer;
}