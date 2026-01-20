#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n;
    int m;
    string s;
    cin >> n >> m;
    
    s.append(n, '*');
    
    for (int i = 0; i < m; ++i)
    {
        cout << s << '\n';
    }
    
    return 0;
}