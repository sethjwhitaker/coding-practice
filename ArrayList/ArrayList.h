#pragma once
// This class is meant to function as a normal array, but its size
// doubles every time it fills up
class ArrayList {

public:
	ArrayList() {
		size = 10;
		arr = new int[size];
		pos = 0;
	}

	~ArrayList() {
		delete [] arr;
	}

	void append(int item);

	void grow();
	
	int getSize();

	int& operator [](int i);

private:
	int *arr, size, pos; // pos is for next item
};

