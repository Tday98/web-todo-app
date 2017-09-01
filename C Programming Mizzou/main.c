#include <stdio.h>
#include "ListCreator.h"

int main(void) {
	struct listnode floatList;
	struct listnode* ptr = &floatList;

	createList(ptr, 10);

	printf("%p\n", floatList.array);
	printf("%d\n", floatList.maxSizeOfList);

	addItem(5.0, ptr);
	addItem(6.0, ptr);
	addItem(7.0, ptr);
	addItem(8.0, ptr);

	for (int i = 0; i < floatList.maxSizeOfList; i++) { printf("%f\n", floatList.array[i]); }

	deleteList(ptr);
	
	printf("\n");

	return 1;
}