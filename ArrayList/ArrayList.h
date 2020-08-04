#pragma once
// This class is functions as a normal array, but its size
// doubles every time it fills up
template<class T>
class ArrayList {

public:
	ArrayList();

	~ArrayList() {
		delete [] arr;
	}

	T* getList();

	void append(T item);

	void grow();
	
	int getSize();

	T& operator [](T i);

private:
	T* arr;
	int size, pos; // pos is for next item
};

template<class T>
T* ArrayList<T>::getList() {
	return arr;
}

template<class T>
ArrayList<T>::ArrayList() {
	size = 10;
	arr = new T[size];
	pos = 0;
}

template<class T>
void ArrayList<T>::append(T item) {
	// allocate more memory if needed
	if (pos == size) grow();

	arr[pos] = item;
	pos++;
}

template<class T>
void ArrayList<T>::grow() {
	int newsize = size * 2;
	T* newArr = new T[newsize];

	// copy array
	for (int i = 0; i < size; i++) {
		newArr[i] = arr[i];
	}

	// delete old array
	delete[] arr;

	arr = newArr;
	size = newsize;

}

template<class T>
int ArrayList<T>::getSize() {
	return size;
}

template<class T>
T& ArrayList<T>::operator [](T i) {
	return arr[i];
}
