#include "LinkedList.h"
#include <iostream>
#include <chrono>
using namespace std;

LinkedList::LinkedList() {
	first = NULL;
}

LinkedList::~LinkedList() {
	Node* a = first;
	while (a != NULL) {
		Node* temp = a->next;
		free(a);
		a = temp; //this is new a. the old a is release.
		//a == null at last of while.
	}
	cout << "Deconstructor Node" << endl;
	/*delete[] first;*/
	cout << "Deconstructor LINKEDLIST" << endl;
}

#pragma region SETTER GETTER of First Node
Node* LinkedList::GetFirstNode() {
	return IsEmpty() ? NULL : first;
}

void  LinkedList::SetFirstNode(Node* first) {
	this->first = first;
}
#pragma endregion

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
	else return NULL;
	Node* nodeAt = temp;

	return nodeAt->data;
}
