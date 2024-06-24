/*
Attributes:

    course_id (string)
    course_name (string)
    category (enum: GeneralEducation, UniversityElective, ComputingCore, Supporting)
    credit_hours (int)

Methods:

    get_course_id() -> string
    get_course_name() -> string
    get_category() -> enum
    get_credit_hours() -> int

*/
#include <iostream>
#include <string>
using namespace std;

class Course
{
private:
    string course_id;
    string course_name;
    // string category;

    enum class Category
    {
        COMPUTING_CORE,
        DOMAIN_CORE,
        DOMAIN_ELECTIVE,
        MATH_SUPPORTING,
        ELECTIVE_SUPPORTING,
        GENERAL_EDUCATION
    };
    Category cat;

    short int credit_hours;

public:
    // constructor to give initial values to data members of an object
    Course() : course_id(""), course_name("Fundamentals of "), cat(Category::COMPUTING_CORE), credit_hours(3) {}

    Course(string &cid, string &cname, Category ct, short int cred) : course_id(cid), course_name(cname),
                                                                      cat(ct), credit_hours(cred) {}

    string get_course_id()
    {
        return course_id;
    }

    string get_course_name()
    {
        return course_name;
    }

    Category get_category() const
    {
        return cat;
    }

    short int get_credit_hours()
    {
        return credit_hours;
    }

    void set_course_name(string &cname)
    {
        course_name = cname;
    }

    void show_course()
    {
        cout << "course_id: " << course_id << endl;
        cout << "course_name: " << course_name << endl;
        // cout << "course_category: " << cat << endl;
        cout << "course_credit_hours: " << credit_hours << endl;
    }
};

int main()
{
    Course obj;
    obj.show_course();
    string str;
    cout << "Enter name of course ";
    cin >> str;
    obj.set_course_name(str);
    obj.show_course();
}