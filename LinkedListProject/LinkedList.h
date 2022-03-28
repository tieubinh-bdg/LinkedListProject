#pragma once
#include <iostream>
#include "Node.h"
using namespace std;

class LinkedList {
private:
	Node* first;
public:
	LinkedList() {
		first = NULL;
	
	}
	bool isEmpty() {
		return first == NULL;
	}
	int getCount() {
		int count = 0;
		Node* temp = first;
		while (temp != NULL) {
			count++;
			temp = temp->next;
		}
		return count;
	}
	void displayList() {
		Node* currentL = first;
		cout << "List: ";
		while (currentL != NULL) {
			currentL->displayLink();
			currentL = currentL->next;
		}
		cout << endl;
	}
#pragma region GET
	int getFirst() {
		return isEmpty() ? NULL : first->iData;
	}
	
	int getAt(int position) {
		if (isEmpty()) { return NULL; }
		Node* temp = first;
		if (position == 0) { return temp->iData; } //return first->iData
		//if position out of length
		if (position <= getCount() - 1) {
			for (int i = 0; i < position; i++)
			{
				temp = temp->next;
			}
		}
		else return NULL;
		Node* linkAt = temp;
		return linkAt->iData;
	}
#pragma endregion
#pragma region INSERT
	void insertFirst(int iData) {
		Node* newLink = new Node(iData);
		newLink->next = first; //oldFirst -> second 
		first = newLink; //newLink -> first
	}

#pragma endregion
#pragma region DELETE
	void deleteFirst() {
		if (isEmpty()) { return; }
		Node* temp = first;
		first = first->next;
	}
#pragma endregion


};
