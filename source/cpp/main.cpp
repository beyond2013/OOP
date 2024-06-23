#include <iostream>
#include "Person.h"
#include "FileHandler.h"

int main()
{
    try
    {
        // Create a Person object
        Person p1("Imran Ali", 46);

        // Serialize the object to a file
        FileHandler::savePersonToFile(p1, "anotherperson.txt");

        // Deserialize the object from the file
        Person p2 = FileHandler::loadPersonFromFile("anotherperson.txt");

        // Display the deserialized object
        std::cout << "Deserialized Person: " << p2 << std::endl;
    }
    catch (const std::ios_base::failure &e)
    {
        std::cerr << "File operation error: " << e.what() << std::endl;
        return 1;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
