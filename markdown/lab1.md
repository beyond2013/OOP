---
lineNumbers: true
---

# Lab 1: Discovering the limitations of structured programming

In this lab you will be modifiying the following c++ program which performs 4 arithmetic operations `[+,-,*, /]` on fractions.

```{.cpp .numberLines}
#include <iostream>

using namespace std;

int result_num, result_den;

void add_fractions(int, int, int, int);
void sub_fractions(int, int, int, int);
void multiply_fractions(int, int, int, int);
void divide_fractions(int, int, int, int);
void display_result();

int main(int argc, char const *argv[])
{
    int f1_num, f1_den, f2_num, f2_den;
    char dummy; // dummy character to read the '/' in fraction 1/2

    cout << "Enter first fraction e.g. 2/3\t";
    cin >> f1_num >> dummy >> f1_den;
    cout << "Enter second fraction \t";
    cin >> f2_num >> dummy >> f2_den;

    cout << "adding fractions results in \t";
    add_fractions(f1_num, f1_den, f2_num, f2_den);
    display_result();
    cout << endl;

    cout << "subtracting fractions results in \t";
    sub_fractions(f1_num, f1_den, f2_num, f2_den);
    display_result();
    cout << endl;

    cout << "multiplying fractions results in \t";
    multiply_fractions(f1_num, f1_den, f2_num, f2_den);
    display_result();
    cout << endl;

    cout << "dividing fractions results in \t";
    divide_fractions(f1_num, f1_den, f2_num, f2_den);
    display_result();

    cout << endl;
    return 0;
}

void add_fractions(int f1_num, int f1_den, int f2_num, int f2_den)
{
    result_den = f1_den * f2_den;
    result_num = f1_num * f2_den + f2_num * f1_den;
}

void sub_fractions(int f1_num, int f1_den, int f2_num, int f2_den)
{
    result_den = f1_den * f2_den;
    result_num = f1_num * f2_den - f2_num * f1_den;
}

void multiply_fractions(int f1_num, int f1_den, int f2_num, int f2_den)
{
    result_den = f1_den * f2_den;
    result_num = f1_num * f2_num;
}

void divide_fractions(int f1_num, int f1_den, int f2_num, int f2_den)
{
    result_num = f1_num * f2_den;
    result_den = f1_den * f2_num;
}
void display_result()
{
    cout << result_num << "/" << result_den;
}
```
Write answers to the following questions on your notebooks:

1. Find out what term is used in programming for variables `result_num` and `result_den` on line 5
2. How many functions in the code can modify the values of `result_num` and `result_den`
3. Why using such variables is not considered good programming practice?
4. Find out why function declarations line 7-11 do not follow good programming
practice, you may use your favorite GPT.  Change the declarations so that they follow good programming practice.
5. Add a new function which can **simplify** the result after adding, subtracting, multiplying and dividing e.g. 1/2 + 3/4 results in 10/8 when simplified the result is 5/4 you may need to define and call another method which gives greatest common divisor (GCD) of 10 and 8.

6. After completing your tasks in this lab.  Email the code to yourself so that you have it in your inbox.
7. Create a github account.
8. Create a public repository with the name **cpp_labs**
9. Upload your code to the **cpp_labs** repo
10. Email the link of your github repo to imran[dot]cs[dot]uob[at]gmail[dot]com
