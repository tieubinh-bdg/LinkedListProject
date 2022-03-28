#include "LinkedList.h"
#include <iostream>
#include <chrono>
using namespace std;

bool LinkedList::isEmpty() {
	return first == NULL;
}
int LinkedList::getCount() {
	int count = 0;
	Node* temp = first;
	while (temp != NULL) {
		count++;
		temp = temp->next;
	}
	return count;
}
void LinkedList::displayList() {
	Node* currentL = first;
	cout << "List: ";
	while (currentL != NULL) {
		currentL->DislayNode();
		currentL = currentL->next;
	}
	cout << endl;
}
#pragma region GET
int LinkedList::getFirst() {
	return isEmpty() ? NULL : first->data;
}

int LinkedList::getAt(int position) {
	if (isEmpty()) {
		return NULL; 
	}
	Node* temp = first;
	if (position == 0) {
		return temp->data; //return first->iData
	} 
	//if position out of length
	if (position <= getCount() - 1) {
		for (int i = 0; i < position; i++)
		{
			temp = temp->next;
		}
	}
	else return NULL;
	Node* linkAt = temp;
	return linkAt->data;
}
#pragma endregion
#pragma region INSERT
void LinkedList::insertFirst(int iData) {
	Node* newLink = new Node(iData);
	newLink->next = first; //oldFirst -> second 
	first = newLink; //newLink -> first
}

#pragma endregion
#pragma region DELETE
void LinkedList::deleteFirst() {
	if (isEmpty()) return;
	Node* temp = first;
	first = first->next;
	free(temp);
}