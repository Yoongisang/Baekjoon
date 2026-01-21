#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

string solution(string s) {
    int count = 1;
    for (auto& c : s)
    {
        if (c == ' ')
        {
            count = 1;
        }
        else
        {
            if (count % 2 != 0)
            {
                c = toupper(c);
            }
            else
            {
                c = tolower(c);
            }
            count++;
        }
  
       
   
    }
    return s;
}