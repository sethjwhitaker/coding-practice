#pragma once

#include <string>

#include "../ArrayList/ArrayList.h"

class StringBuilder {

public:
	StringBuilder() {
		arr = new ArrayList<char>();
	}

	~StringBuilder() {
		delete arr;
	}

	void concat(std::string string);

	std::string getString();

private:

	ArrayList<char> *arr;

};

