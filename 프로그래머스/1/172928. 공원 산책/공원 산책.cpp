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

    int dy[] = {-1, 1, 0, 0};
    int dx[] = {0, 0, -1, 1};
    string dirs = "NSWE";
    
    for (const auto& r : routes)
    {
        int num = r[2] - '0';
        int dir = dirs.find(r[0]);
        
        int temp_y = y; 
        int temp_x = x;
        bool valid = true;
        
        for (int i = 0; i < num; i++)
        {
            temp_y += dy[dir];
            temp_x += dx[dir];
            
            if (temp_y < 0 || temp_y >= park.size() || temp_x < 0 || temp_x >= park[0].size() || park[temp_y][temp_x] == 'X')
            {
                valid = false;
                break;
            }
        }
        if (valid)
        {
            y = temp_y;
            x = temp_x;
        }
    }
    answer = {y, x};
    return answer;
}