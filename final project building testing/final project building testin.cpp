// This program is on numbering system it conevrts the number from one base to another
// Title: Final project numbering System
// programmer madhura kulkarni
// Last modified: 12/11/2016 9:59PM


#include <iostream>
# include"Input validationHeader.h"
# include "numSystemConversionHeader.h"
# include<string>
#include<fstream>
#include <cstdlib>
# include<iomanip>
using namespace std;

int main()
{

	const int
		MIN_BASE = 2,
		MAX_BASE = 36;

	int choice = 0;

	system("color E0");
	system("title Final project Numbering system by Madhura");

	printBanner(SIZE, MAX_BASE);

	while (choice != 4)
	{
		printMenu();

		cout << "\n\n   choice: ";
		choice = getIntInrange(1, 4);//  getIntInRange(1, 4)

		switch (choice)
		{
		case 1:
			// This function ask user the decimal number and target base
			// and the convert that number in to specific base
			conversionFromDecimal2anotherBase();
			cout << endl << endl;
			system("pause"); system("CLS"); continue;

		case 2:
			// This function ask user current base and initial number
			// and convert that number into decimal
			conversionFromanyBase2decimal();
			cout << endl << endl;
			system("pause"); system("CLS"); continue;

		case 3:
			// This function reads the data from file and
			//converts data to respective target base
			readingDataFromFileandConvert();
			cout << endl << endl;
			system("pause"); system("CLS"); continue;
		case 4:cout << "\n Thank you for converting with us.Hit ENTER to end the program.";
			cin.get();
		}
	}
}

