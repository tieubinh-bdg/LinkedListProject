#pragma once
#include <iostream>
using namespace std;

class Node {
public:
	int iData;
	Node* next;
	
	//Default
	Node() {}
	//Overloading Construc: iData
	Node(int iData) {
		this->iData = iData;
	}
	void displayLink() {
		cout << "{ ";
		cout << iData << " }";
	} 
};