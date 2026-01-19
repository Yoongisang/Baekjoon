using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = price;
    answer = answer * (count * (count + 1) / 2) - money;
    if (answer <= 0)
    {
        answer = 0;
    }

    return answer;
}