#pragma once

class Deque {
private:

	struct Node { 
		int data = 0;
		Node* next = nullptr;
		Node* prev = nullptr;  };

	Node *head, *tail;

public:
//Constructors:
//Construct deque container(public member function)
	Deque() :head(nullptr), tail(nullptr) {}

//Deque destructor(public member function)
	~Deque() {}


//Capacity:
//Return size(public member function)
	int size();

//Test whether container is empty(public member function)
	bool empty();

//Print all elements 
	void printAll();
//Element access :		
//Access first element(public member function)
	int front();

//Access last element(public member function)	
	int back();

//Modifiers:
//Assign container content(public member function)	assign
	void assign(int size, int d);

//Add element at the end(public member function) 	
	void push_back(int d);

//Insert element at beginning(public member function)	
	void push_front(int d);

//Delete last element(public member function)	
	void pop_back();

//Delete first element(public member function)	
	void pop_front();

//Clear content(public member function) clear
	void erase();
};
