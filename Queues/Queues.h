#pragma once


class Queues {
private:
	struct Node { int data = 0; Node* next = nullptr; };

	Node *head, *tail;
public:
	Queues() : head(nullptr), tail(nullptr) {}
	~Queues() {}


	void insertNewNode(int d);
	void printAll();
	void empty();
	int size();
	int front() const;
	int back() const ;
    void push_back(int d);
	int pop_front();
};	