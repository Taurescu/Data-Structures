#include <iostream>
#include "Queues.h"

using namespace std;

void Queues::insertNewNode(int d){
	Node* temp = new Node;

	temp->data = d;
	temp->next = nullptr;

	if (head == nullptr) {
		head = temp;
		tail = temp;
	}
	else {	
		tail->next = temp;
		tail = temp;
	}
}
void Queues::printAll(){
	Node* temp = new Node;
	temp = head;
	while (temp != nullptr) {
		cout << temp->data <<" ";
		temp = temp->next;
	}
}
void Queues::empty() { delete head; delete tail; }
int Queues::size() {
	Node* temp = new Node;
	int count = 0;
	temp = head;
	while (temp->next != nullptr){
		temp = temp->next;
		++count;
	}
	return count;
}
int Queues::front ()  const {
	return tail->data;
}
int Queues::back () const {
	return head->data;
}
void Queues::push_back(int d) {
	Node *temp = new Node;
	if (head == nullptr) {
		temp->data = d;
		temp->next = head;
		head = temp;
		tail = head;
	}
	else {
		temp->data = d;
		temp->next = head;
		head = temp;
	}
}
int Queues::pop_front(){
	Node* temp = new Node;
	const int ret = tail->data;

	temp = head;
	while (temp->next->next != nullptr) {
		temp = temp->next;
	}
	tail = temp;
	delete tail->next;
	tail->next = nullptr;
	return ret;
}