#include <iostream>
#include "HashTable.h"

int menu();
bool evaluateChoice(int choice, HashTable& table);

int main() {
	HashTable table = HashTable(10);
	while (true) {
		bool repeat = evaluateChoice(menu(), table);
		if (!repeat) break;
	}

	
}

int menu() {
	using std::cout;
	using std::cin;

	int choice;

	cout << "-------------------------\n";
	cout << "          Menu           \n";
	cout << "-------------------------\n";
	cout << "1. Insert key-value pair \n";
	cout << "2. Find key-value pair   \n";
	cout << "3. Print hash table      \n";
	cout << "4. Quit                  \n";
	cout << "Enter choice: ";

	cin >> choice;

	return choice;
}

bool evaluateChoice(int choice, HashTable& table) {
	using std::cout;
	using std::cin;
	switch (choice) {
	case 1:
	{
		std::string key;
		int value;
		cout << "Enter a key (string): ";
		cin >> key;
		cout << "Enter a value (int): ";
		cin >> value;
		table.addElement(key, value);
		cout << "\n";
	}
		break;
	case 2:
	{
		std::string key;
		cout << "Enter a key (string): ";
		cin >> key;
		cout << table.find(key);
		cout << "\n";
	}
		break;
	case 3:
		cout << table;
		break;
	case 4:
		return 0;
	default:
		return 0;
	}
	return 1;
}
