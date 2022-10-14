#include <iostream>
#include <string>
using namespace std;
class Stack
{
	protected:
		enum { MAX = 5 };
		int st[MAX];
		int top;
	public:
		Stack() { top = -1; }
    void push(int var)
		{ st[++top] = var; }
		int pop()
		{return st[top--];}
};

class SafeStack: public Stack
{
	public:
		void push(int var)
		{
			if(top >= MAX-1)
			{ cout << "\n Error: stack is full"; exit(1);}
			Stack::push(var);
		}
		int pop()
		{
			if(top < 0)
			{ cout << "\n Error: stack is empty\n";exit(1); }
			return Stack::pop();
		}
};

int main()
{
  Stack obj;
	obj.push(5);
	obj.push(4);
	obj.push(3);
	obj.push(2);
	obj.push(1);
  cout<< obj.pop()<<endl;
  cout<< obj.pop()<<endl;
	cout<< " function calls on Safe Stack object " <<endl;
  SafeStack obj2;
	obj2.push(10);
	obj2.push(20);
	obj2.push(30);
	obj2.pop();
	obj2.pop();
	obj2.pop();
	obj2.pop();

	return 0;
}

