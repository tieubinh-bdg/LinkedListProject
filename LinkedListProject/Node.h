#pragma once
#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node();
	//~Node();
	Node(int data);
	void DislayNode();
};