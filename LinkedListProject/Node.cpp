#include "Node.h"
#include <iostream>
using namespace std;

Node::Node() {}

Node::Node(int data) {
	this->data = data;
}

//Can't catch deconstructor of Node
Node::~Node() {
	cout << "Catch descontructor of node";
}

void Node::DislayNode() {
	cout << "{ " << data << " }";
}