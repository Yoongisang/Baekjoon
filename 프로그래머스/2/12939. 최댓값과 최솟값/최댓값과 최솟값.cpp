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
    answer += to_string(*num.begin()) + " " + to_string(*(num.end() - 1));
    return answer;
}