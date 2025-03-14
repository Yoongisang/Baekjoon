#include <iostream>
#pragma region Class
using namespace std;

class Stack
{
private:

	int* data = nullptr;

	int index = 0;
public:
	int X;
	string A;
public:

	void Clear()
	{
		index = 0;
		delete[] data;
		data = nullptr;
	}

	int Count()
	{
		return index;
	}

	bool IsEmpty()
	{
		if (index > 0)
		{
			return 0;
		}
		return 1;
	}

	void Push(int _data)
	{
		int* temp;
		if (index == 0)
		{
			data = new int[index + 1];
			data[index] = _data;

		}
		else if (index > 0)
		{
			temp = new int[index + 1];
			for (int i = 0; i < index; i++)
			{
				temp[i] = data[i];
			}
			temp[index] = _data;
			delete[] data;
			data = temp;
		}
		index++;

	}

	int Pop()
	{

		if (index > 1)
		{
			int* temp = new int[index - 1];
			int _data = data[index - 1];
			for (int i = 0; i < index - 1; i++)
			{
				temp[i] = data[i];
			}
			index--;

			delete[] data;
			data = temp;
			return _data;
		}
		else if (index == 1)
		{
			int _data = data[index - 1];
			index--;
			delete[] data;
			data = nullptr;
			return _data;
		}
		return -1;
	}
	int top()
	{
		if (index > 0)
		{
			return data[index - 1];
		}
		return -1;
	}

public:
	Stack()
	{
	}

	~Stack()
	{
		delete[] data;
		data = nullptr;
	}
};
#pragma endregion


int main()
{
	int N;
	scanf("%d", &N);
	Stack* stack = new Stack[N];

	for (int i = 0; i < N; i++)
	{
		cin >> stack[i].A;
		if (stack[i].A == "push")
		{
			cin >> stack[i].X;
		}
	}
	for (int i = 0; i < N; i++)
	{
		int num = 0;
		if (stack[i].A == "push")
		{
			stack->Push(stack[i].X);
		}
		else if (stack[i].A == "pop")
		{
			num = stack->Pop();
			cout << num << endl;
		}
		else if (stack[i].A == "size")
		{
			num = stack->Count();
			cout << num << endl;
		}
		else if (stack[i].A == "empty")
		{
			num = stack->IsEmpty();
			cout << num << endl;
		}
		else if (stack[i].A == "top")
		{
			num = stack->top();
			cout << num << endl;
		}
	}
}