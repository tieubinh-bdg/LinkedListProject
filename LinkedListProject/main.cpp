#include "main.h"
#include "SingleLinkedList.h"
int main() {
	LinkedList* list = new SingleLinkedList();
	list->InsertFirst(1);
	list->InsertFirst(1);
	list->InsertFirst(5);
	list->InsertFirst(4);
	list->InsertFirst(99);
	list->InsertFirst(21);
	list->InsertFirst(25);
	list->InsertFirst(44);
	list->InsertFirst(959);
	list->InsertFirst(81);
	list->InsertFirst(95);
	list->InsertFirst(24);
	list->InsertFirst(3399);
	list->InsertFirst(3241);
	list->InsertFirst(50000);
	list->DisplayList();
	cout << "Insert at postion 50: " << endl;
	list->DisplayList();
	cout << "FIRST: " << list->GetFirst() << endl;
	cout << "GET at index 10: " << list->GetAt(10) << endl;
	//release
	delete list;
	return 0;
}