#include "HashTable.h"
#include <iostream>
namespace {
	int hashKey(std::string key) {
		int hash = 0;
		for (int i = 0; i < key.size(); i++) {
			hash += key[i];
		}
		return hash;
	}
}

void HashTable::addElement(std::string key, int value) {
	int index = hashKey(key)%tableSize;
	table[index].push_back({ key, value });
}

int HashTable::find(std::string key) {
	int index = hashKey(key)%tableSize;
	int value = -1;
	for (auto i = table[index].begin(); i != table[index].end(); i++) {
		if (i->key == key) {
			value = i->value;
			break;
		}
	}
	return value;
}

std::ostream& operator <<(std::ostream& out, const HashTable& table) {
	for (int i = 0; i < table.tableSize; i++) {
		out << i << ". ";
		if (table.table[i].empty()) {
			out << ", ";
		} else {
			for (auto it = table.table[i].begin(); it != table.table[i].end(); it++) {
				out << hashKey(it->key);
				out << " : ";
				out << it->key;
				out << " : ";
				out << it->value;
				out << ", ";
			}
			
		}
		out << "\n";
	}

	return out;
}