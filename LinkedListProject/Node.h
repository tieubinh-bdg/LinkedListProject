#pragma once
#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node() {}
	
	Node(int iData) {
		this->data = iData;
	}
	~Node() {
		//NO catch
		/*delete next;
		cout << "Deconstructor Node" << endl;*/
	}
	void DislayNode();
};