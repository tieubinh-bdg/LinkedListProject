#pragma once
#include <iostream>
#include "LinkedList.h"

class SingleLinkedList : public LinkedList{
public:
	SingleLinkedList();
	void InsertFirst(int data);
	void DeleteFirst();
};

