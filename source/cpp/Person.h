#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person
{
public:
    Person() : name(""), age(0) {}
    Person(const std::string &name, int age) : name(name), age(age) {}

    // Getters
    std::string getName() const { return name; }
    int getAge() const { return age; }

    // Setters
    void setName(const std::string &name) { this->name = name; }
    void setAge(int age) { this->age = age; }

    // Friend functions for serialization and deserialization
    friend std::ostream &operator<<(std::ostream &os, const Person &person);
    friend std::istream &operator>>(std::istream &is, Person &person);

private:
    std::string name;
    int age;
};

// Serialization
std::ostream &operator<<(std::ostream &os, const Person &person)
{
    os << person.name << "\n"
       << person.age << "\n";
    return os;
}

// Deserialization
std::istream &operator>>(std::istream &is, Person &person)
{
    std::getline(is, person.name);
    is >> person.age;
    is.ignore(); // To consume the newline character after the age
    return is;
}

#endif // PERSON_H
