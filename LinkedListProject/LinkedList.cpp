#include "LinkedList.h"
#include <iostream>
#include <chrono>
using namespace std;

LinkedList::LinkedList() {
	first = NULL;
}

LinkedList::~LinkedList() {
	Node* current = this->first;
	while (current != NULL) {
		Node*  temp = current->next;
		delete current;
		current = temp;
	}

	cout << "Deconstructor Node" << endl;
	cout << "Deconstructor LINKEDLIST" << endl;
}

Node* LinkedList::GetFirstNode() {
	return IsEmpty() ? NULL : this->first;
}

void  LinkedList::SetFirstNode(Node* first) {
	this->first = first;
}

bool LinkedList::IsEmpty() {
	return first == NULL;
}

int LinkedList::Count() {
	int count = 0;
	Node* temp = this->first;
	while (temp != NULL) {
		count++;
		temp = temp->next;
	}

	return count;
}

void LinkedList::DisplayList() {
	Node* current = this->first;
	cout << "List: ";
	while (current != NULL) {
		current->DislayNode();
		current = current->next;
	}
	cout << endl;
}

int LinkedList::GetFirst() {
	return IsEmpty() ? NULL : this->first->data;
}

int LinkedList::GetAt(int position) {
	if (IsEmpty() || position > this->Count()) { 
		return NULL; 
	}

	Node* temp = first;
	for (int i = 0; i < position; i++) {
		temp = temp->next;
	}

	return temp->data;
}
