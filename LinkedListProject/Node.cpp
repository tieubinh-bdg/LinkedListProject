#include "Node.h"
#include <iostream>
#include <format>
#include <string>
using namespace std;

Node::Node(int data) {
	this->data = data;
	this->next = NULL;
}

void Node::DislayNode() {
	char buffer[100];
	sprintf_s(buffer, "{ %d }", data); //c++ 11
	cout << buffer;
}
