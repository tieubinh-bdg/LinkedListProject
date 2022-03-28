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
		a = temp;
		//A == null at last of while.
	}
	cout << "Deconstructor Node" << endl;
	/*delete[] first;*/
	cout << "Deconstructor LINKEDLIST" << endl;
}
bool LinkedList::IsEmpty() {
	return first == NULL;
}
int LinkedList::GetCount() {
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
	if (IsEmpty()) {
		return NULL;
	}
	Node* temp = first;
	if (position == 0) {
		return temp->data; //return first->iData
	}
	//if position out of length
	if (position <= GetCount() - 1) {
		for (int i = 0; i < position; i++) {
			temp = temp->next;
		}
	}
	else return NULL;
	Node* nodeAt = temp;
	return nodeAt->data;
}

void LinkedList::InsertFirst(int iData) {
	Node* newNode = new Node(iData);
	newNode->next = first; //oldFirst -> second 
	first = newNode; //newLink -> first
}

void LinkedList::DeleteFirst() {
	if (IsEmpty()) return;
	Node* temp = first;
	first = first->next;
	free(temp);
	temp = NULL;
}