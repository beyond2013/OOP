#include <iostream>
#include <string>
using namespace std;
class Book
{
public:
    // Constructor
    Book(const string &title, const string &author, const string &isbn, const string &genre = "")
        : title_(title), author_(author), isbn_(isbn), genre_(genre), available_(true) {}

    // Getters
    const string &getTitle() const { return title_; }
    const string &getAuthor() const { return author_; }
    const string &getIsbn() const { return isbn_; }
    const string &getGenre() const { return genre_; }
    bool isAvailable() const { return available_; }

    // Setter (only for availability)
    void setAvailable(bool available) { available_ = available; }

    // Function to reserve a book (can be modified for specific needs)
    void reserveBook()
    {
        if (available_)
        {
            std::cout << title_ << " is now reserved." << std::endl;
            available_ = false;
        }
        else
        {
            std::cout << title_ << " is already unavailable." << std::endl;
        }
    }

private:
    std::string title_;
    std::string author_;
    std::string isbn_;
    std::string genre_;
    bool available_;
};
