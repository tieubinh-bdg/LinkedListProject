#pragma once
#include <iostream>
using namespace std;

class Link {
public:
	int iData;
	Link* next;
	
	//Default
	Link() {}
	//Overloading Construc: iData
	Link(int iData) {
		this->iData = iData;
	}
	void displayLink() {
		cout << "{ ";
		cout << iData << " }";
	} 
};