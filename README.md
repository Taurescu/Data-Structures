# Data-Structures
Here are some of the main data structures implemented by me to have a better understanding of them.

They have the functionality that was presented on http://www.cplusplus.com/reference + in some cases, other functionalitys that we're 
created by me.

Linked List - It's a class that have a struct Nude { int data; Node* next; } as private paramenter. Each node represent a list elemet.
                    Each node contain a variable to store the data ( int data ) and a pointer to the next Node ( element of the array ).

Vector  - This class was made when I read chapter 11 from Accelerated C++ book. This class can store more data types becose of template <class T>
                   The private members of this class are data, avil and limit. 
                   Data - first element of the class.
                   Avil - last element of the class
                   Limit - ending of the memory allocation of the class 
                   The memory allocation of this class is made with the help of the library <memory> from where I created a oject from 
                      std::allocator class. 

Stack - It's a class same as linked list with the stack properties ( First In, Last Out )

Queue - It's a class same as linked list with the stack properties ( First In, First Out )

Deque - It's a class that have both Stack and Queue properties.
