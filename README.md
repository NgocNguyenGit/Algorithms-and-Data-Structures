# Algorithms-and-Data-Structures

### Mid-term Project
Implement a city database using unordered lists. Each database record contains the name of the city (a string of arbitrary length) and the coordinates of the city expressed as integer x and y coordinates. Your database should allow records to be inserted, deleted by name or coordinate, and searched by name or coordinate. Another operation that should be supported is to print all records within a given distance of a specified point.

Implement the database using an array-based list implementation, and then a linked list implementation.
Collect running time statistics for each operation in both implementations.
What are your conclusions about the relative advantages and disadvantages of the two implementations?

Would storing records on the list in alphabetical order by city name speed any of the operations?

Would keeping the list in alphabetical order slow any of the operations?

### Homework 3
A) Implement the dictionary ADT of the following dictionary based on stacks. Your implementation should declare and use two stacks.
B) Implement the previous dictionary ADT based on queues. Your implementation should declare and use two queues.

 

The ADT for a simple dictionary:

// The Dictionary abstract class.
template 
class Dictionary {
private:
void operator =(const Dictionary&) {}
Dictionary(const Dictionary&) {}
public:
Dictionary() {} // Default constructor
virtual ˜Dictionary() {} // Base destructor
// Reinitialize dictionary
virtual void clear() = 0;
// Insert a record
// k: The key for the record being inserted.
// e: The record being inserted.
virtual void insert(const Key& k, const E& e) = 0;
// Remove and return a record.
// k: The key of the record to be removed.
// Return: A maching record. If multiple records match
// "k", remove an arbitrary one. Return NULL if no record
// with key "k" exists.
virtual E remove(const Key& k) = 0;
// Remove and return an arbitrary record from dictionary.
// Return: The record removed, or NULL if none exists.
virtual E removeAny() = 0;
// Return: A record matching "k" (NULL if none exists).
// If multiple records match, return an arbitrary one.
// k: The key of the record to find
virtual E find(const Key& k) const = 0;
// Return the number of records in the dictionary.
virtual int size() = 0;
};

### Homework 2
Write a program that determines whether an input string is a palindrome; that is, whether it can be read the same way forward and backward.

At each point, you can read only one character of the input string; do not use an array to first store this string and then analyze it (except, possibly, in a stack implementation).

Consider using multiple stacks.

Using asymptotic notations, determine the time complexity and space complexity of your algorithms and your overall program.
