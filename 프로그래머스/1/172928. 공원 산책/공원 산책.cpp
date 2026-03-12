#include <string>
#include <vector>
#include<cstdlib> 

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int x, y;

    for (int i = 0; i < park.size(); i++)
    {
        for (int j = 0; j < park[i].size(); j++)
        {
            if (park[i][j] == 'S')
            {
                x = j;
                y = i;
                break;
            }
        }
    }

    for (const auto& r : routes)
    {
       int num = 0;
       num = r[2] - '0';

        if (r[0] == 'N')
        {
            int temp = y;
            
            for (int i = 0; i < num; i++)
            {
                temp--;
                
                if (temp < 0 || park[temp][x] == 'X')
                {
                    temp = y;
                    break;
                }
            }
            y = temp;
        }
        else if (r[0] == 'S')
        {
            int temp = y;
            
            for (int i = 0; i < num; i++)
            {
                temp++;
                
                if (temp >= park.size() || park[temp][x] == 'X')
                {
                    temp = y;
                    break;
                }
            }
            y = temp;
        }
        else if (r[0] == 'W')
        {
            int temp = x;
            
            for (int i = 0; i < num; i++)
            {
                temp--;
                
                if (temp < 0 || park[y][temp] == 'X')
                {
                    temp = x;
                    break;
                }
            }
            x = temp;
        }
        else if (r[0] == 'E')
        {
            int temp = x;
            
            for (int i = 0; i < num; i++)
            {
                temp++;
                
                if (temp >= park[y].size() || park[y][temp] == 'X')
                {
                    temp = x;
                    break;
                }
            }
            x = temp;
        }
    }
    answer = {y, x};
    return answer;
}