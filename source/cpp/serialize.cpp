#include <iostream>
#include <fstream>

class Person
{
public:
    std::string name;
    int age;

    Person() : name(""), age(0) {}
    Person(const std::string &name, int age) : name(name), age(age) {}

    // Serialize the object to binary format
    void serialize(std::ofstream &outFile) const
    {
        size_t nameLen = name.size();
        outFile.write(reinterpret_cast<const char *>(&nameLen), sizeof(nameLen));
        outFile.write(name.c_str(), nameLen);
        outFile.write(reinterpret_cast<const char *>(&age), sizeof(age));
    }

    // Deserialize the object from binary format
    void deserialize(std::ifstream &inFile)
    {
        size_t nameLen;
        inFile.read(reinterpret_cast<char *>(&nameLen), sizeof(nameLen));
        name.resize(nameLen);
        inFile.read(&name[0], nameLen);
        inFile.read(reinterpret_cast<char *>(&age), sizeof(age));
    }
};

int main()
{
    Person p1("Jane Doe", 25);

    // Serialize to binary file
    std::ofstream outFile("person.bin", std::ios::binary);
    if (outFile.is_open())
    {
        p1.serialize(outFile);
        outFile.close();
    }

    Person p2;

    // Deserialize from binary file
    std::ifstream inFile("person.bin", std::ios::binary);
    if (inFile.is_open())
    {
        p2.deserialize(inFile);
        inFile.close();
    }

    std::cout << "Deserialized Person: " << p2.name << " " << p2.age << std::endl;

    return 0;
}