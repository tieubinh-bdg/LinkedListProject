#include "SingleLinkedList.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;

SingleLinkedList::SingleLinkedList() : LinkedList() {

}

void SingleLinkedList::InsertFirst(int data) {
	Node* newNode = new Node(data);
	newNode->next = GetFirstNode(); //oldFirst -> second 
	SetFirstNode(newNode); //newLink -> first
}

void SingleLinkedList::DeleteFirst() {
	if (IsEmpty()) { return; }
	Node* temp = GetFirstNode();
	SetFirstNode(GetFirstNode()->next);
	free(temp);
	temp = NULL;
}