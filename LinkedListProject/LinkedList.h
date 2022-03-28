#pragma once
#include <iostream>
#include "Link.h"
using namespace std;

class LinkedList {
private:
	Link* first;
	//Doubly linked list to: insertLast, deleteLast
	Link* last;
public:
	LinkedList() {
		first = NULL;
		last = NULL;
	}
	bool isEmpty() {
		return first == NULL;
	}
	int getCount() {
		int count = 0;
		Link* temp = first;
		while (temp != NULL) {
			count++;
			temp = temp->next;
		}
		return count;
	}
	void displayList() {
		Link* currentL = first;
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
	int getLast() {
		return isEmpty() ? NULL : last->iData;
	}
	int getAt(int position) {
		if (isEmpty()) { return NULL; }
		Link* temp = first;
		if (position == 0) { return temp->iData; } //return first->iData
		//if position out of length
		if (position <= getCount() - 1) {
			for (int i = 0; i < position; i++)
			{
				temp = temp->next;
			}
		}
		else return NULL;
		Link* linkAt = temp;
		return linkAt->iData;
	}
#pragma endregion
#pragma region INSERT
	void insertFirst(int iData) {
		Link* newLink = new Link(iData);
		if (isEmpty()) {
			last = newLink; //isEmpty: last = newLink = first
		}
		newLink->next = first; //oldFirst -> second 
		first = newLink; //newLink -> first
	}

	void insertLast(int iData) {
		Link* newLink = new Link(iData);
		if (isEmpty()) {
			first = newLink; //New LinkedList => first
		}
		else {
			last->next = newLink; // oldLast->next = newLast (newLink)
		}
		last = newLink; //if isEmpty() => first = last
	}
	void insertAtPosition(int position, int iData) {
		Link* newLink = new Link(iData);
		if (isEmpty()) {
			last = newLink;
			newLink->next = first; //oldFirst -> second 
			first = newLink; //newLink -> first
			return;
		}
		Link* temp = first;
		//Get previous link (temp: previousLink)
		if (position <= getCount() - 1) {
			for (int i = 0; i < position - 1; i++)
			{
				temp = temp->next;
			}
		}
		else {
			//If position out of length then insertLast
			insertLast(iData);
			return;
		}
		Link* next = temp->next; //Get nextLink of insertedLink
		temp->next = newLink;
		newLink->next = next;

	}
#pragma endregion
#pragma region DELETE
	//Delete First
	void deleteFirst() {
		if (isEmpty()) { return; }
		Link* temp = first;
		first = first->next;
	}
	//Delete Last
	void deleteLast() {
		if (isEmpty()) return;
		int length = getCount();
		deleteAtPosition(length - 1);
	}

	//Position start 0
	void deleteAtPosition(int position) {
		if (isEmpty()) { return; }
		Link* temp = first;
		if (position == 0) {
			first = temp->next;
			return;
		}
		//Position - 1: previous of DeletedLink
		//If: position out of Length
		if (position <= getCount() - 1) {
			for (int i = 0; i < position - 1; i++)
			{
				temp = temp->next;
			}
		}
		else  cout << "Position out of length";

		//temp now is previous link of DeletedLink
		Link* next = temp->next->next; // temp | temp->next (position) | temp->next->next
		temp->next = next; // Delete positionLink: temp->next
	}
#pragma endregion


};
