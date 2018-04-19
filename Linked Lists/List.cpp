#include <iostream>
#include "List.h"


using namespace std;

void SLL::printAll() {
	
	Node *temp = new Node;
	temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}
void SLL::insertNewNode(int d) {
	Node* temp = new Node;

	temp->data = d;
	temp->next = nullptr;

	if(head == nullptr)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}


}

void SLL::insertTofront(int d) {
	Node* temp = new Node;

	temp->data = d;
	temp->next = head;
	head = temp;
}
void SLL::insertToBack(int d) {
	Node* temp = new Node;

	temp->data = d;
	temp->next = nullptr;

	tail->next = temp;
	tail = temp;

}
void SLL::insertNthNode(int n, int d) {
	Node* count = new Node;
	Node* count2 = new Node;
	Node* temp = new Node;
	
	count = head;
	count2 = head;

	for (int i = 1; i != n; ++i) 
		count = count->next;
	for (int i = 1; i != n - 1; ++i)
		count2 = count2->next;
	
	temp->data = d;
	temp->next = count;
	count2->next = temp;
}

void SLL::deleteFront(){
	Node* temp = new Node;

	temp = head->next;
	delete head;

	head = temp;

}
void SLL::deleteBack(){
	Node* temp = new Node;

	temp = head->next;
	for (int i = 1; i != sizeOfList() - 2; ++i)
		temp = temp->next;

	delete tail;
	tail = temp;
	
}
void SLL::deleteNthNode(int n){

	Node* count = new Node;
	Node* count2 = new Node;

	count = head;
	count2 = head;

	for (int i = 1; i != n; ++i)
		count = count->next;
	for (int i = 1; i != n - 1; ++i)
		count2 = count2->next;

	count2->next = count->next;
}

void SLL::revers() {
	Node* temp_head = new Node;
	Node* temp2 = new Node;
	Node* temp_tail = new Node;

	temp_head = tail;
	temp_tail = tail;

	temp2 = head;
	for (int i = sizeOfList(); i != 1; --i) {
		for (int j = 1; j != i - 1; ++j) {
			temp2 = temp2->next;
		}

		temp2->next = nullptr;
		temp_tail->next = temp2;
		temp_tail = temp2;
		temp2 = head;
	}
	head = temp_head;
}
void SLL::deleteDuplicate(){
	Node* temp = new Node;
	Node* temp2 = new Node;
	Node* dup = new Node;

	temp = head;
	while (temp != nullptr && temp->next != nullptr) {
		temp2 = temp;
			while (temp2->next != nullptr) {
				
				if (temp->data == temp2->next->data) {
					dup = temp2->next;
					temp2->next= temp2->next->next;
					delete(dup);
				}
				else {
					temp2 = temp2->next;
				}
			}
		temp = temp->next;
		
	}

}
void SLL::shiftNodes(int n) {
	Node* temp = new Node;

	temp = head;
	for (int i = 1; i != n; ++i) {
		temp = temp->next;
	}
	temp->data ^= temp->next->data;
	temp->next->data ^= temp->data;
	temp->data ^= temp->next->data;

}
int SLL::sizeOfList(){
	Node* temp = new Node;
	int count = 1;

	if (head->next == nullptr)
		return 0;

	temp = head;
	while (temp->next != nullptr) {
		temp = temp->next;
		++count;
	}
	return count;
}
void SLL::sortList() {
	Node* count = new Node;
	Node* count2 = new Node;

	count = head;
	while (count != nullptr && count->next != nullptr) {
		count2 = count;
		while (count2->next != nullptr) {
			if (count->data > count2->next->data)
			{
				count->data ^= count2->next->data;
				count2->next->data ^= count->data;
				count->data ^= count2->next->data;
			}
			count2 = count2->next;
		}
		count = count->next;
	}
}

