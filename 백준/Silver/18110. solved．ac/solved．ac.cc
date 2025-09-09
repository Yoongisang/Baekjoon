#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
#include <stack>
#include <queue>
#include <cmath>

using namespace std;

int main() 
{
    int n = 0; 
    float index = 0;
    int aver = 0;
    float sum = 0;
    int result = 0;

    cin >> n;

    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    vector<float> score(n);

    for (int i = 0; i < n; i++)
    { 
        cin >> score[i];
    }

    index = score.size();
    aver = round(index * 0.15);


    sort(score.begin(), score.end());

    for (int i = aver; i < n - aver; i++)
    {
        sum += score[i];
    }

    sum /= index - (aver * 2);
    result = round(sum);
    cout << result;

    return 0; 
}
