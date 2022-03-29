#include "Node.h"
#include <iostream>
#include <format>
#include <string>
using namespace std;

Node::Node() {
	this->next = NULL;
}

Node::Node(int data) {
	this->data = data;
	this->next = NULL;
}

// Node is released in LinkedList Deconstructor.
//Node::~Node() {
//	cout << "Deconstructing node" << endl;
//	Node* temp = this;
//	Node* next = this->next;
//	
//	if (this->next != NULL) {
//		free(this->next);
//		//this->next = NULL;
//	}
//	free(this);
//}

void Node::DislayNode() {
	char buffer[100];
	sprintf_s(buffer, "{ %d }", data); //c++ 11
	cout << buffer;
	//cout << "{ " << data << " }";
}