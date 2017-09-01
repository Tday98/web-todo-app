#include <stdio.h>

typedef struct {
	int maxSizeOfList, index;
	float *array;
}List;

// Creates a struct of type List with the bounds specified by the User. 
int createList(List *listPtr, int max) {
	listPtr->maxSizeOfList = max;
	listPtr->index = 0;
	listPtr->array = (float *) malloc(sizeof(float));
	if (listPtr->array == NULL) return 0;
	return 1;
}

// This function adds a new item (float f) to the top of the list and moves everything down one position.
float addItem(float f, List *listPtr) {
	if (listPtr->index == listPtr->maxSizeOfList) return 0;
	listPtr->array[listPtr->index] = f;
	listPtr->index++;
	return 1;
}

// Returns the number of elements in a list.
int sizeOfList(List lst){
	return lst.index;
}

// Given an int I and a struct of type List, it will return the the item at that index. 
// NOTE: The user cannot try to access something that i.e. giving an index that is out of bounds for the List struct.
float getItem(int i, List lst) {
	if (i < lst.maxSizeOfList && i > 0) {
		return lst.array[i];
	} else {
		printf("Error! Index given is out of bounds of the list!\n");
		return 0;
	}
}

// Frees the allocated memory for the List struct (thus deleting the struct)
void deleteList(List *listPtr) {
	listPtr->index = 0;
	free(listPtr->array);
	listPtr->array = NULL;
}

int main() {
	List floatList;
	List* ptr = &floatList;

	createList(ptr, 10);

	printf("%p\n", floatList.array);
	printf("%d\n", floatList.maxSizeOfList);

	addItem(5.0, ptr);
	addItem(6.0, ptr);
	addItem(7.0, ptr);
	addItem(8.0, ptr);

	for (int i = floatList.index; i >= 0; i--) { printf("%f\n", floatList.array[i]); }
	printf("\n%f\n", getItem(11, floatList));

	deleteList(ptr);
	
	printf("\n");
	printf("%f\n", floatList.array[floatList.index]);
	printf("%p\n", floatList.array);

	return 1;
}