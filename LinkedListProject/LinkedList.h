#pragma once
#include <iostream>
#include "Node.h"
using namespace std;

// Interface chỉ chứa method và không được implement method trong interface, không chứa field
// Abstract class chứa method, field và có thể implement method luôn
// Không nên nhóm chung abstract class và hàm thuần ảo (hàm thuần ảo chỉ chứa trong interface)
// -> case này: không dùng hàm thuần ảo, dùng abstract method
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
