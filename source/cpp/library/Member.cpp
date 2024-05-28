#include <iostream>
#include <string>

class Member
{
public:
    // Constructor
    Member(const std::string &name, const std::string &id) : name_(name), id_(id) {}

    // Getters
    const std::string &getName() const { return name_; }
    const std::string &getId() const { return id_; }

    // Function to borrow a book (should interact with Loan class)
    void borrowBook(Book &book)
    {
        if (book.isAvailable())
        {
            // Logic for creating a Loan object can be placed here
            std::cout << name_ << " borrowed " << book.getTitle() << std::endl;
            book.setAvailable(false);
        }
        else
        {
            std::cout << book.getTitle() << " is not available for borrowing." << std::endl;
        }
    }

private:
    std::string name_;
    std::string id_;
};
