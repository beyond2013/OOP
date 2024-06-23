#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <iostream>
#include <fstream>
#include <stdexcept>
#include "Person.h"

class FileHandler
{
public:
    static void savePersonToFile(const Person &person, const std::string &filename)
    {
        std::ofstream outFile(filename);
        if (!outFile.is_open())
        {
            throw std::ios_base::failure("Failed to open the output file.");
        }
        outFile << person;
        outFile.close();
    }

    static Person loadPersonFromFile(const std::string &filename)
    {
        std::ifstream inFile(filename);
        if (!inFile.is_open())
        {
            throw std::ios_base::failure("Failed to open the input file.");
        }
        Person person;
        inFile >> person;
        inFile.close();
        return person;
    }
};

#endif // FILEHANDLER_H
