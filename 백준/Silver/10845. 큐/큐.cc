#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
#include <stack>

using namespace std;

int main() 
{
    int n = 0;
    string command;
    int* queue = nullptr;
	int queue_size = 0;
	cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num = 0;
        cin >> command;
        if (command == "push")
        {
            cin >> num;
            if (queue == nullptr)
            {
                queue = new int[1];
                queue[0] = num;
                queue_size += 1;
            }
            else
            {
                int* temp = new int[queue_size + 1];
                for (int j = 0; j < queue_size; j++)
                {
                    temp[j] = queue[j];
				}
                temp[queue_size] = num;
                queue_size += 1;
                delete[] queue;
				queue = temp;
            }
        }
        else if (command == "front")
        {
            cout << (queue_size == 0 ? -1 : queue[0]) << endl;
        }
        else if (command == "back")
        {
            cout << (queue_size == 0 ? -1 : queue[queue_size - 1]) << endl;
        }
        else if (command == "size")
        {
            cout << queue_size << endl;
        }
        else if (command == "empty")
        {
            if (queue_size == 0)
            {
                cout << 1 << endl;
            }
            else
            {
				cout << 0 << endl;
            }
        }
        else if (command == "pop")
        {
            if (queue_size == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << queue[0] << "\n";
                if (queue_size == 1)
                {
                    delete[] queue;
					queue = nullptr;
                    queue_size -= 1;
                }
                else
                {
                    int* temp = new int[queue_size - 1];
                    for (int i = 0; i < queue_size - 1; i++)
                    {
                        temp[i] = queue[i + 1];
                    }
                    queue_size -= 1;
                    delete[] queue;
					queue = temp;
                }
            }
        }

    }
   
    return 0; 
}
