#include <iostream>
#include <string>
#include <fstream>
class Person
{
public:
    std::string name;
    int age;

    Person() : name(""), age(0) {}                                     // Default constructor
    Person(const std::string &name, int age) : name(name), age(age) {} // Parameterized constructor
};

// Overload the insertion (<<) operator
std::ostream &operator<<(std::ostream &os, const Person &person)
{
    os << person.name << " " << person.age;
    return os;
}

// Overload the extraction (>>) operator
std::istream &operator>>(std::istream &is, Person &person)
{
    std::getline(is, person.name);
    is >> person.age;
    return is;
}

int main()
{
    // Create a Person object
    Person p1("Syed Imran Ali Shah", 46);

    // Serialize the object to a file
    std::ofstream outFile("person.txt");
    if (outFile.is_open())
    {
        outFile << p1;
        outFile.close();
    }

    // Deserialize the object from the file
    Person p2;
    std::ifstream inFile("person.txt");
    if (inFile.is_open())
    {
        inFile >> p2;
        inFile.close();
    }

    // Display the deserialized object
    std::cout << "Deserialized Person: " << p2 << std::endl;

    return 0;
}