#pragma once

class Stq {
private :
	struct Node { int data; Node* next; };
	Node *head, *tail;

public:
//Construct stack(public member function)
	Stq():head(nullptr), tail(nullptr) { }
//Test whether container is empty(public member function)
	bool empty();
//Return size(public member function)
	int size()const;
//Access next element(public member function)
	int top();
//Insert element(public member function)
	void push(int d);
//Remove top element(public member function)
	int pop();
//Swap contents(public member function)
	void swap(Stq& s);
//Print all elements
	void printAll();
};