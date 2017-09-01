#ifndef ListCreator_H_
#define ListCreator_H_

typedef struct listnode {
	int maxSizeOfList, index;
	float *array;
}List;


int createList(List *listPtr, int max);

float addItem(float f, List *listPtr);

int sizeOfList(List lst);

float getItem(int i, List lst);

void deleteList(List *listPtr);

#endif // ListCreator_H_