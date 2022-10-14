class Book
  attr_reader :title, :author # ready only
  # attr_writer (write only)
  # attr_accessor (read and write)

  def initialize(title, author)
    @title = title
    @author = author
  end
    
  def what_am_i
    puts "I'm a book!"
  end

  def self.myName
   puts "I am class method from the class book"
  end

end

book = Book.new("Ruby Deep Dive", "Jesus Castello")
fun = Book.new("Fun with Programming", "White Cat")

#book.what_am_i


puts book.author

puts Book.myName


