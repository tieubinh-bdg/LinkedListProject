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
	bool IsEmpty();
	int GetCount();
	void DisplayList();
	int GetFirst();
	int GetAt(int position);
	void InsertFirst(int iData);
	void DeleteFirst();
};
