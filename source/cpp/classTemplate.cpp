#include <iostream>

template <typename T>
class Array
{
private:
    int size;
    T data[10]; // Array of size 10 (can be adjusted)

public:
    Array(int s) : size(s) {}

    void setElement(int index, T value)
    {
        data[index] = value;
    }

    T getElement(int index)
    {
        return data[index];
    }

    void printArray()
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
    int length()
    {
        return size;
    }
};

int main()
{
    Array<int> marks(5);
    Array<double> doubleArray(7);

    for (int i = 0; i < marks.length(); i++)
    {
        marks.setElement(i, i * 2);
    }

    for (int i = 0; i < doubleArray.length(); i++)
    {
        doubleArray.setElement(i, i * 1.5);
    }

    marks.printArray();
    doubleArray.printArray();
}