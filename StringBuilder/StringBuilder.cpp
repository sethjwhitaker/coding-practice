#include "StringBuilder.h"

void StringBuilder::concat(std::string string) {
	for (int i = 0; i < string.size(); i++) {
		arr->append(string[i]);
	}
}

std::string StringBuilder::getString() {
	arr->append('/0');
	std::string s(arr->getList());
	return s;
}