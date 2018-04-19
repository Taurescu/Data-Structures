#include <iostream>
#include "Stack.h"



//Test whether container is empty(public member function)
bool Stq::empty(){
	if (head == nullptr)
		return true;
	else
		return false;
}

//Return size(public member function)
int Stq::size()const {
	Node* temp = new Node;
	int size = 0;

	temp = head;
	while (temp->next != nullptr) {
		temp = temp->next;
		++size;
	}
	return size;
}

//Access next element(public member function)
int Stq::top() { return head->data; }

//Insert element(public member function)
void Stq::push(int d){
	Node * temp = new Node;
	
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

//Remove top element(public member function)
int Stq::pop(){
	const int res = tail->data;
	Node* temp = new Node;
	if (head == tail)
	{
		delete head;
		head->next = nullptr;
		head = nullptr;
		
	}
	else {
		temp = head;
		while (temp->next->next != nullptr) {
			temp = temp->next;
		}
		tail = temp;
		delete tail->next;
		tail->next = nullptr;
	}
	return res;
}

//Swap contents(public member function)
void Stq::swap(Stq& s){
	Stq* temp_this = new Stq;
	Stq* temp_s = new Stq;
	
	while (!s.empty())
		temp_s->push(s.pop());
	while (!this->empty())
		temp_this->push(this->pop());

	delete head;

	while (!temp_this->empty())
		s.push(temp_this->pop());
	while (!temp_s->empty())
		this->push(temp_s->pop());

	delete temp_this;
	delete temp_s;
}

//Print all elements
void Stq::printAll(){
	Node *temp = new Node;

	temp = head;
	while (temp != nullptr)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}
}