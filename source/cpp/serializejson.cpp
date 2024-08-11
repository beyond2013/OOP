#include <nlohmann/json.hpp>
#include <fstream>

class Person
{
public:
    std::string name;
    int age;

    // Convert to JSON
    nlohmann::json to_json() const
    {
        return nlohmann::json{{"name", name}, {"age", age}};
    }

    // Load from JSON
    void from_json(const nlohmann::json &j)
    {
        name = j.at("name").get<std::string>();
        age = j.at("age").get<int>();
    }
};

int main()
{
    Person p1("Jane Doe", 25);

    // Serialize to JSON file
    std::ofstream outFile("person.json");
    if (outFile.is_open())
    {
        nlohmann::json j = p1.to_json();
        outFile << j.dump();
        outFile.close();
    }

    Person p2;

    // Deserialize from JSON file
    std::ifstream inFile("person.json");
    if (inFile.is_open())
    {
        nlohmann::json j;
        inFile >> j;
        p2.from_json(j);
        inFile.close();
    }

    std::cout << "Deserialized Person: " << p2.name << " " << p2.age << std::endl;

    return 0;
}