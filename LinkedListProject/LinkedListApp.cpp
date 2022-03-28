#include "LinkedListApp.h"

#include "LinkedList.h"
#include <iostream>
using namespace std;

//void printList(Link* n);

int main() {
	LinkedList* list = new LinkedList();
	/*int n;
	for (int i = 0; i < 20; i++) {
		cin >> n;
		list->insertFirst(n);
	}*/

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
	list->insertLast(790);
	list->insertLast(100);
	list->insertLast(700);
	list->insertLast(600);
	list->insertLast(7087);
	list->insertLast(960);
	list->displayList();
	cout << "Insert at postion 50: " << endl;
	list->insertAtPosition(50, 2205);
	cout << "Length: " << list->getCount() << endl;
	//cout << "Delete at position: ";
	//list->deleteAtPosition(5);
	//cout << endl;
	///*cout << "Delete last: ";
	//list->deleteLast();*/
	//cout << endl;
	//GET
	list->displayList();
	cout << "FIRST: " << list->getFirst() << endl;
	cout << "LAST: " << list->getLast() << endl;		
	cout << "GET at index 10: " << list->getAt(10) << endl;

	/*cout << "Delete: " << list->deleteFirst() << endl;*/

	/*while (!list-> isEmpty())
	{
		Link* delLink = list->deleteFirst();
		cout << "Deleting" << endl;
		delLink->displayLink();
		cout << endl;
	}*/
	
	return 0;
}
