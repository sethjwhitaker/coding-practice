#pragma once

#include <list>
#include <string>
#include <fstream>

struct HashTableNode {
	std::string key;
	int value;
};

class HashTable {

public:
	HashTable(int size) {
		table = new std::list<HashTableNode>[size];
		tableSize = size;
	}

	~HashTable() {
		delete[] table;
	}

	void addElement(std::string key, int value);
	int find(std::string key);

	friend std::ostream& operator <<(std::ostream& out, const HashTable& table);

private:
	std::list<HashTableNode> *table;
	int tableSize;
};

