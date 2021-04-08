#include "CTourists.h"
#include "functions.cpp"
#include <iostream>

int main()
{
	char choice;

	CTourists* tourists = new CTourists[200];
	CTourists* men = new CTourists[100];

	int nTourists;
	int nMen;

	nTourists = 0;
	nMen = 0;

	do {
		std::cout << "1 - Add tourists\n";
		std::cout << "2 - Print all tourists\n";
		std::cout << "3 - Print women born on chosen date\n";
		std::cout << "4 - Depart all men candidates with chosen desired country\n";
		std::cout <<"Choose an operation or 0 to end\n";
		std::cin >> choice;
		switch(choice)
		{
		case '1': 
		{
			tourists[nTourists].getData();
			nTourists++;
			break;
		}

		case '2': 
		{
			for(int i=0;i<nTourists;i++)
			{
				tourists[i].displayData();
			}
			break;
		}

		case '3':
		{
			system("cls");
			printWomen(tourists, nTourists);
			break;
		}

		case '4':
		{
			system("cls");
			arrayForMens(tourists, nTourists, men, nMen);
			break;
		}
	
		}
	} while (choice != '0');

	delete[]men;
	delete[]tourists;
	system("pause");
}