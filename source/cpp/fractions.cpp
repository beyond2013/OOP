#include <iostream>

using namespace std;

/* 1. find out what term is used in programming for following variables
   2. why using such variables is not considered good?
*/
int result_num, result_den;

/* find out why this and following
declarations do not follow good programming
practice, you may use your favorite GPT.
3. Change the declarations so that they follow good programming practice.
*/

/*
   4. add a method which can simplify
    the result after adding, subtracting, multiplying and dividing
    e.g. 1/2 + 3/4 results in 10/8 when simplified the result is 5/4
    you may need to define and call another method which gives
    greatest common divisor (GCD) of 10 and 8
*/

/*
    5. After completing your tasks in this lab.
    Email the code to yourself so that you have it in your inbox.

    6. Create a github account.

    7. Create a public repository with the name cpp_labs

    8. upload your code to the cpp_labs repo

    9. email the link of your github repo to imran[dot]cs[dot]uob[at]gmail[dot]com

*/

void add_fractions(int, int, int, int);
void sub_fractions(int, int, int, int);
void multiply_fractions(int, int, int, int);
void divide_fractions(int, int, int, int);
void display_result();

int main(int argc, char const *argv[])
{
    int f1_num, f1_den, f2_num, f2_den;
    char dummy; // dummy character to read the /

    int result_numerator, result_denominator;

    cout << "Enter first fraction e.g. 2/3\t";
    cin >> f1_num >> dummy >> f1_den;
    cout << "Enter second fraction \t";
    cin >> f2_num >> dummy >> f2_den;

    cout << "adding fractions results in \t";
    add_fractions(f1_num, f1_den, f2_num, f2_den);
    display_result();

    cout << "subtracting fractions results in \t";
    sub_fractions(f1_num, f1_den, f2_num, f2_den);
    display_result();

    cout << "multiplying fractions results in \t";
    multiply_fractions(f1_num, f1_den, f2_num, f2_den);
    display_result();

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