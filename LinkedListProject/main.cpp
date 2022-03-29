#include "main.h"

int main() {
	LinkedList* list = new SingleLinkedList();
	list->InsertFirst(1);
	list->InsertFirst(4);

	list->DisplayList();
	cout << "Insert at postion 50: " << endl;
	//cout << "FIRST: " << list->GetFirst() << endl;
	cout << "GET at index 10: " << list->GetAt(10) << endl;
	cout << "Delete first: " << list->GetFirst();
	/*list->DeleteFirst();*/
	cout << endl;
	list->DisplayList();
	//release
	delete list;

	return 0;
}