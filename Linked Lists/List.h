#pragma once



class SLL {
	
private:
	struct Node {
		int data = NULL;
		Node* next = nullptr;
	};
	Node *head, *tail;
	
public:
	SLL(): head(nullptr), tail(nullptr) { }
	~SLL() {}

	void printAll();
	void insertNewNode(int d);

	void insertTofront(int d);
	void insertToBack(int d);
	void insertNthNode(int n, int d);

	void deleteBack();
	void deleteFront();
	void deleteNthNode(int n);

	void revers();
	void deleteDuplicate();
	void shiftNodes(int n);
	void sortList();
	int sizeOfList();


};