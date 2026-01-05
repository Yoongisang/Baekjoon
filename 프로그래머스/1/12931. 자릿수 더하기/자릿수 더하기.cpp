#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    string s = to_string(n);
    int answer = 0;
    for (int i = 0; i < s.size(); i++)
    {
        answer += s[i] - '0';
    }


    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << s << endl;

    return answer;
}