using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = price;
    answer = answer * (count * (count + 1) / 2);
    if (answer <= money)
    {
        answer = 0;
    }
    else
    {
        answer = answer - money;
    }
    return answer;
}