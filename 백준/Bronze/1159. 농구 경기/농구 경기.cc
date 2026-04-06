#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;



int main() {
    int N;
    map<char, int> list;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        string s; 
        cin >> s;
        list[s[0]]++;
    }
    
    string answer;
    for (const auto& it : list)
    {
        if (it.second >= 5)
        {
            answer += it.first;
        }
    }
    
    if (answer.empty())
    {
        cout << "PREDAJA" << '\n';
    }
    else
    {
        cout << answer << '\n';
    }
    
    return 0;
}

