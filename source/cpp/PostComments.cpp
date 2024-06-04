#include <iostream>
#include <string>
#include <vector>
// using namespace std;
class Comment
{
private:
    std::string text;

public:
    // Constructors
    Comment() : text("") {}
    Comment(const std::string &txt) : text(txt) {} // Comment obj("I am with Abid")

    // Getters
    std::string getText() const { return text; }

    // Setters
    void setText(const std::string &txt) { text = txt; } // obj.setText("Now Sami is also with us")

    // Functions to edit and delete comment
    void editComment(const std::string &newText) { text = newText; }
};

class Post
{
private:
    std::string text;
    int likes;
    int shares;
    std::vector<Comment> comments; // Composition: Post "has" Comments

public:
    // Constructors
    Post() : text(""), likes(0), shares(0) {}                        // Post p;
    Post(const std::string &txt) : text(txt), likes(0), shares(0) {} // Post p("my first post")

    // Getters
    std::string getText() const { return text; }
    int getLikes() const { return likes; }
    int getShares() const { return shares; }

    // Setters
    void setText(const std::string &txt) { text = txt; }
    void addLike() { likes++; }
    void addShare() { shares++; }

    // Functions to edit and delete post
    void editPost(const std::string &newText) { text = newText; }
    void deletePost()
    {
        text = "";
        likes = 0;
        shares = 0;
        comments.clear(); // Clear all comments
    }

    // Function to add comment
    void addComment(const std::string &commentText)
    {
        comments.push_back(Comment(commentText)); // un named object
    }

    // Function to edit a specific comment
    void editComment(size_t index, const std::string &newText)
    {
        if (index < comments.size())
        {
            comments[index].editComment(newText);
        }
    }

    // Function to delete a specific comment
    void deleteComment(size_t index)
    {
        if (index < comments.size())
        {
            comments.erase(comments.begin() + index);
        }
    }

    // Display post and comments
    void display() const
    {
        std::cout << "Post: " << text << "\nLikes: " << likes << "\nShares: " << shares << std::endl;
        for (size_t i = 0; i < comments.size(); ++i)
        {
            std::cout << "Comment " << i + 1 << ": " << comments[i].getText() << std::endl;
        }
    }
};

int main()
{
    // Example usage
    Post myPost("Hello, world!");
    myPost.addLike();
    myPost.addShare();
    myPost.addComment("Nice post!");

    myPost.display();

    myPost.editPost("Hello, everyone!");
    std::cout << "\nAfter editing the post:\n";
    myPost.display();

    // Edit a comment
    myPost.editComment(0, "Really nice post!");
    std::cout << "\nAfter editing the first comment:\n";
    myPost.display();

    // Add another comment and then delete it
    myPost.addComment("Another comment!");
    std::cout << "\nAfter adding another comment:\n";
    myPost.display();

    myPost.deleteComment(1);
    std::cout << "\nAfter deleting the second comment:\n";
    myPost.display();

    myPost.deletePost(); // This will delete the post and all associated comments
    std::cout << "\nAfter deleting the post:\n";
    myPost.display();

    return 0;
}
