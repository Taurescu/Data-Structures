#include <iostream>
#include "Deque.h"

using namespace std;


//Capacity:
//Return size(public member function)
int Deque::size(){
	Node* temp = new Node;
	int count = 0;

	temp = head;
	while (temp->next != nullptr) {
		++count;
		temp = temp->next;
	}
	return count + 1;
}

//Test whether container is empty(public member function)
bool Deque::empty(){
	if (head == nullptr)
		return true;
	else
		return false;
}

//Print all elements 
void Deque::printAll() {
	Node* temp = new Node;

	temp = head;
	while (temp != nullptr) {
		cout << temp->data << ' ';
		temp = temp->next;
	}
}

//Element access :
//Access first element(public member function)
int Deque::front() { return head->data; }

//Access last element(public member function)	
int Deque::back() { return tail->data; }

//Modifiers:
//Assign container content(public member function)	assign
void Deque::assign(int size, int d){
	for (int i = 0; i != size; ++i) {
		Node* temp = new Node;

		temp->data = d;
		temp->next = nullptr;
		temp->prev = nullptr;

		if (head == nullptr) {
			head = tail = temp;
		}
		else {
			temp->prev = tail;
			tail->next = temp;
			tail = temp;
		}
	}
}

//Add element at the end(public member function) 	
void Deque::push_back(int d){
	Node* temp = new Node;

	temp->data = d;
	temp->next = nullptr;
	temp->prev = nullptr;

	if (head == nullptr) {
		head = tail = temp;
	}
	else {
		temp->prev = tail;
		tail->next = temp;
		tail = temp;
	}
}

//Insert element at beginning(public member function)	
void Deque::push_front(int d){
	Node* temp = new Node;
	 
	temp->data = d;
	temp->next = nullptr;
	temp->prev = nullptr;

	if (head == nullptr) {
		head = tail = temp;
	}
	else {
		temp->next = head;
		head->prev = temp;
		head = temp;
	}
}

//Delete last element(public member function)	
void Deque::pop_back(){
	Node *temp = new Node;
	Node *temp2 = new Node;

	temp2 = tail->prev;
	delete tail;
	tail = temp2;
	tail->next = nullptr;

}

//Delete first element(public member function)	
void Deque::pop_front(){
	Node *temp = new Node;

	temp = head->next;
	delete head;

	head = temp;
}

//Clear content(public member function) clear
void Deque::erase() {

	delete tail;
	delete head;

	tail = nullptr;
	head = nullptr;
}