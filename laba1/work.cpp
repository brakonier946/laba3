#include "work.h"
#include "myStack.h"
#include "univer.h"
#include <iostream>
#include <fstream>
#include "sortEnum.h"

using namespace std;

void work::read() {
	_data = myStack<univer>();

	ifstream in(name_file);
	if (in.is_open()) {
		string line;
		while (getline(in, line)) {
			if (line == "")
				continue;
			_data.push(univer::createFromFile(line));
		}
	}
	in.close();
}

void work::write() {
	ofstream out;
	out.open(name_file);

	if (out.is_open()) {
		out << _data;
	}

	out.close();
}

void work::add() {
	_data.push(univer::createFromConsole());
}

void work::print() {
	_data.show();
}

void work::sort(typeSort tSort) {
	auto head = _data.getLastNode();
	while (head) {
		head->data.sortedVariable = tSort;
		head = head->prev;
	}
	_data.sort();
}