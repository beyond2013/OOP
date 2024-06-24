#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>

bool isSubset(const std::set<int> &set1, const std::set<int> &set2)
{
    return std::includes(set1.begin(), set1.end(), set2.begin(), set2.end());
}

std::set<int> intersection(const std::set<int> &set1, const std::set<int> &set2)
{
    std::set<int> intersectionSet;
    std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),
                          std::inserter(intersectionSet, intersectionSet.begin()));
    return intersectionSet;
}
int main()
{
    // Initialize two sets with some numbers
    std::set<int> set1 = {1, 3, 5, 7, 9};
    std::set<int> set2 = {2, 3, 5, 8, 10};

    set1.insert(4);
    set1.insert(4);
    set1.insert(4);
    set1.insert(5);
    // set1.erase(3);

    for (const auto &elem : set1)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    set2.insert(6);

    // Create a set to store the union of set1 and set2
    std::set<int> unionSet;

    // Perform the union operation
    std::set_union(set1.begin(), set1.end(), set2.begin(), set2.end(),
                   std::inserter(unionSet, unionSet.begin()));

    // Print the union set
    std::cout << "Union of set1 and set2: ";
    for (const auto &elem : unionSet)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    // set intersection

    auto intersect = intersection(set1, set2);

    std::cout << "Intersection of set1 and set2: ";
    for (const auto &elem : intersect)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    // finding an element in  a set  -- 4 belongs to the set -- 4 does not belong

    auto target = 6;
    auto it = set1.find(target);
    if (it != set1.end())
    {
        std::cout << "Element " << target << " is in the set." << std::endl;
    }
    else
    {
        std::cout << "Element " << target << " is not in the set." << std::endl;
    }
    // checking sets for equality, simply use ==

    if (set1 == set2)
    {
        std::cout << "Set1 and set2 are equal" << std::endl;
    }
    else
    {

        std::cout << "Set1 and set2 are not equal" << std::endl;
    }
    // to test if a set is empty use set1.empty(), empty() returns a boolean value

    std::cout << "The statement, set1 is the subset of set2, is: " << isSubset(set1, set2) << std::endl;

    return 0;
}
