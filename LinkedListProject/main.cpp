#include "Main.h"

int main() {
	LinkedList* list = new SingleLinkedList();
	list->InsertFirst(1);
	list->InsertFirst(888);
	list->InsertFirst(51);
	list->InsertFirst(74);
	list->InsertFirst(132);
	list->InsertFirst(40);
	list->DisplayList();
	
	cout << "GET at index 10: " << list->GetAt(10) << endl;
	cout << "Delete first: " << list->GetFirst() << endl;
	
	list->DeleteFirst();
	list->DisplayList();
	//release
	delete list;

	return 0;
}