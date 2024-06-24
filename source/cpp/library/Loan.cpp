#include <iostream>
#include <string>
class Loan
{
public:
    // Constructor to include borrow date
    Loan(Member &member, Book &book) : member_(member), book_(book), borrowDate_(std::time(nullptr)) {}

    // Getters
    Member &getMember() const { return member_; }
    Book &getBook() const { return book_; }
    const std::string &getBorrowDate() const { return borrowDateStr_; }
    const std::string &getDueDate() const { return dueDateStr_; }

    // Setter for due date
    void setDueDate(int daysFromBorrow)
    {
        dueDate_ = borrowDate_ + std::chrono::days(daysFromBorrow);
        // Update dueDateStr_ to a formatted string representation
        std::time_t dueDateT = dueDate_;
        dueDateStr_ = std::ctime(&dueDateT);
        dueDateStr_.erase(dueDateStr_.size() - 1); // Remove newline character
    }

    // Function to calculate a simple fine (modify as needed)
    int calculateFine() const
    {
        std::time_t today = std::time(nullptr);
        if (dueDate_ < today)
        {
            int overdueDays = std::chrono::duration_cast<std::chrono::days>(today - dueDate_).count();
            return overdueDays * 2; // Hypothetical fine of $2 per overdue day
        }
        return 0;
    }

    // Function to extend due date (modify as needed)
    void extendDueDate(int additionalDays)
    {
        dueDate_ += std::chrono::days(additionalDays);
        // Update dueDateStr_ to reflect the new due date
        std::time_t dueDateT = dueDate_;
        dueDateStr_ = std::ctime(&dueDateT);
        dueDateStr_.erase(dueDateStr_.size() - 1); // Remove newline character
        std::cout << "Due date for " << book_.getTitle() << " extended to " << dueDateStr_ << std::endl;
    }

private:
    Member &member_;
    Book &book_;
    std::time_t borrowDate_;
    std::chrono::sys_time<std::time_t> dueDate_;
    mutable std::string borrowDateStr_; // To store formatted borrow date string
    mutable std::string dueDateStr_;    // To store formatted due date string
};
