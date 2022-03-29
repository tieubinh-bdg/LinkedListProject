#pragma once
#include <iostream>
#include "Node.h"
using namespace std;
class LinkedList {
private:
	Node* first;
public:
	LinkedList();
	~LinkedList();
	Node* GetFirstNode();
	void SetFirstNode(Node* first);
	bool IsEmpty();
	int Count();
	void DisplayList();
	int GetFirst();
	int GetAt(int position);
	virtual void InsertFirst(int data) = 0;
	virtual void DeleteFirst() = 0;
};
