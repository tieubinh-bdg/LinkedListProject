#include "Node.h"
#include <iostream>
using namespace std;

Node::Node() {}

Node::Node(int iData) {
	this->data = iData;
}
void Node::DislayNode() {
	cout << "{ ";
	cout << data << " }";
}