#include "ArrayList.h"

void ArrayList::append(int item) {
	// allocate more memory if needed
	if (pos == size) grow();

	arr[pos] = item;
	pos++;
}

void ArrayList::grow() {
	int newsize = size*2;
	int *newArr = new int[newsize];
	
	// copy array
	for (int i = 0; i < size; i++) {
		newArr[i] = arr[i];
	}

	// delete old array
	delete[] arr;

	arr = newArr;
	size = newsize;

}

int ArrayList::getSize() {
	return size;
}

int& ArrayList::operator [](int i) {
	return arr[i];
}