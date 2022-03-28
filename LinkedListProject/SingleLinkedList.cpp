#include "SingleLinkedList.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;

int main() {
	SingleLinkedList* list = new SingleLinkedList();
	/*int n;
	for (int i = 0; i < 20; i++) {
		cin >> n;
		list->insertFirst(n);
	}*/
	list->insertFirst(1);
	list->insertFirst(1);
	list->insertFirst(5);
	list->insertFirst(4);
	list->insertFirst(99);
	list->insertFirst(21);
	list->insertFirst(25);
	list->insertFirst(44);
	list->insertFirst(959);
	list->insertFirst(81);
	list->insertFirst(95);
	list->insertFirst(24);
	list->insertFirst(3399);
	list->insertFirst(3241);
	list->insertFirst(50000);

	list->displayList();
	cout << "Insert at postion 50: " << endl;
	list->displayList();
	cout << "FIRST: " << list->getFirst() << endl;
	cout << "GET at index 10: " << list->getAt(10) << endl;

	//release
	delete list;
	return 0;
}
