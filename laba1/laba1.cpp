#include <iostream>
#include <iomanip>
#include "work.h"
#include "sortEnum.h"

int main()
{
	work w;

	w.read();

	w.print();

	cout << endl;

	w.add();
	w.add();

	cout << endl;

	w.print();

	cout << "					sorted data by NAME university" << endl;
	w.sort(typeSort::nameProperty);
	w.print();

	cout << "					sorted data by NUMBER OF FACULTIES" << endl;
	w.sort(typeSort::numberOfFacultiesProperty);
	w.print();

	cout << "					sorted data by NUMBER OF GRADUATES" << endl;
	w.sort(typeSort::numberOfGraduatesProperty);
	w.print();

	w.write();

	return 0;
}
