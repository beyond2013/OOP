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

class Loan
{
public:
    // Constructor (can be modified to include additional details)
    Loan(Member &member, Book &book) : member_(member), book_(book) {}

    // Getters
    Member &getMember() const { return member_; }
    Book &getBook() const { return book_; }

private:
    Member &member_;
    Book &book_;
};

int main()
{
    // Create some Book objects
    Book book1("The Hitchhiker's Guide to the Galaxy", "Douglas Adams", "ISBN1234567890", "Science Fiction");
    Book book2("Pride and Prejudice", "Jane Austen", "ISBN9876543210", "Classic");

    // Create a Member object
    Member member1("John Doe", "M12345");

    // Member borrows a book (assuming Loan object is created in borrowBook)
    member1.borrowBook(book1);

    // Display book information
    std::cout << book1.getTitle() << " by " << book1.getAuthor() << " is " << (book1.isAvailable() ? "available" : "unavailable") << std::endl;

    return 0;
}
