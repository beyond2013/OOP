#include <iostream>
using namespace std;
#include <cstdlib>

class Stack
{
	protected:
		enum { MAX = 3 };
		int st[MAX];
		int top;
	public:
		Stack()
		{ top = -1; }

		void push(int var)
		{ st[++top] = var; }

		int pop()
		{ return st[top--]; }
};

class Stack2 : public Stack
{
	public:
		void push(int var)
		{
			if(top >= MAX-1)
			{ cout << "\nError: stack is full"; exit(1); }
			Stack::push(var);
		}
		int pop()
		{
			if(top < 0)
			{ cout << "\nError: stack is empty\n"; exit(1); }
			return Stack::pop();
		}
};

int main()
{
	Stack2 s1;
	s1.push(11);
	s1.push(22);
	s1.push(33);

	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop();
	return 0;
}

