#include "LinkedList.h"
#include <iostream>
#include <chrono>
using namespace std;

LinkedList::LinkedList() {
	first = NULL;
}

LinkedList::~LinkedList() {
	Node* temp = first;
	Node* current = first;
	//while(temp != NULL)
	while (current != NULL) {
		current = current->next;
		delete temp;
		temp = current;
	}

	cout << "Deconstructor Node" << endl;
	cout << "Deconstructor LINKEDLIST" << endl;
}

Node* LinkedList::GetFirstNode() {
	return IsEmpty() ? NULL : first;
}

void  LinkedList::SetFirstNode(Node* first) {
	this->first = first;
}

bool LinkedList::IsEmpty() {
	return first == NULL;
}

int LinkedList::Count() {
	int count = 0;
	Node* temp = first;
	while (temp != NULL) {
		count++;
		temp = temp->next;
	}

	return count;
}

void LinkedList::DisplayList() {
	Node* current = first;
	cout << "List: ";
	while (current != NULL) {
		current->DislayNode();
		current = current->next;
	}
	cout << endl;
}

int LinkedList::GetFirst() {
	return IsEmpty() ? NULL : first->data;
}

int LinkedList::GetAt(int position) {
	if (IsEmpty()) { return NULL; }
	Node* temp = first;
	if (position == 0) {
		return temp->data; //return first->iData
	}
	//if position out of length
	if (position <= Count() - 1) {
		for (int i = 0; i < position; i++) {
			temp = temp->next;
		}
	}
	else { return NULL; }
	Node* nodeAt = temp;

	return nodeAt->data;
}
