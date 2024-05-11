// Array as class member data
#include <iostream>
using namespace std;

class Stack
{
private:
    enum
    {
        MAX = 64
    };           //(non-standard syntax)
    int st[MAX]; // stack: array of integers
    int top;     // number of top of stack

public:
    Stack()
    // constructor
    {
        top = 0;
    }
    void push(int var) // put number on stack
    {
        st[++top] = var;
    }
    int pop() // take number off stack
    {
        return st[top--];
    }

    bool isempty()
    {
        if (top == 0)
            return 1;
        else
            return 0;
    }
};

int main()
{
    int input, number, remainder;

    cout << "\n Enter a number to convert to binary\t";
    cin >> input;
    number = input;
    Stack s;
    while (number != 0) // keep dividing the number by 2
    {
        remainder = number % 2; // calculate the remainder
        s.push(remainder);      // and store it on stack
        number /= 2;            // reduce the number by a factor of 2
    }

    cout << input << " in binary is equal to ";
    while (!s.isempty())
    {
        cout << s.pop();
    }

    cout << endl; // separate program output from command prompt
    return 0;
}