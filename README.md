# Data-Structures
Here are some of the main data structures implemented by me to have a better understanding of them.

They have the functionality that was presented on http://www.cplusplus.com/reference + in some cases, other functionalities that were 
created by me.

Linked List - It's a class that has a struct Nude { int data; Node* next; } as private paramenter. Each node represents a list elemet.
                    Each node contains a variable to store the data ( int data ) and a pointer to the next Node ( element of the array ).

Vector  - This class was made when I read chapter 11 from Accelerated C++ book. This class can store more data types because of template <class T>
                   The private members of this class are data, avil and limit. 
                   Data - first element of the class.
                   Avil - last element of the class
                   Limit - ending of the memory allocation of the class 
                   The memory allocation of this class is made with the help of the library <memory> from where I created an oject from 
                      std::allocator class. 

Stack - It's a class same as linked list with the stack properties ( First In, Last Out )

Queue - It's a class same as linked list with the stack properties ( First In, First Out )

Deque - It's a class that have both Stack and Queue properties.
