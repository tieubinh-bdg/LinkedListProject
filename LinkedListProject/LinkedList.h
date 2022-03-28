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
	~LinkedList() {
		Node* a = first;
		while (a != NULL) {
			Node* temp = a->next;
			free(a);
			a = temp;
		}
		cout << "Deconstructor Node" << endl;
		/*delete[] first;*/
		cout << "Deconstructor LINKEDLIST" << endl;
	}
	bool isEmpty();
	int getCount();
	void displayList();
	int getFirst();
	int getAt(int position);
	void insertFirst(int iData);
	void deleteFirst();
};
