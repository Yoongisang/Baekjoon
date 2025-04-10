#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 

using namespace std;

int main()
{
    string S;
    cin >> S;

    if (S.size() >= 5 && S.substr(S.size() - 5) == "driip")
    {
        cout << "cute" << endl;
    }
    else
    {
        cout << "not cute" << endl;
    }
    return 0;
}