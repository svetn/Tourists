#include <iostream>
#include "CTourists.h"

static void printWomen(CTourists arr[], int sizeOfarr)
{
	int year;
	std::cout << "Year to compare: \n";
	std::cin >> year;
	for (int i = 0; i < sizeOfarr; i++)
	{
		if (arr[i].getBirthDate() == year && arr[i].getGender() != 0)
		{
			std::cout << arr[i].getPhoneNumber() << std::endl;
			std::cout << arr[i].getName() << std::endl;
		}
	}
}

static void arrayForMens(CTourists arr[], int sizeOfArr, CTourists newArr[], int sizeOfNewArr)
{
	sizeOfNewArr = 0;
	std::cin.ignore();
	std::string country;
	std::getline(std::cin, country);

	for (int i = 0; i < sizeOfArr; i++)
	{
		if (arr[i].getGender() == 0 && arr[i].getDesiredCountry().compare(country) == 0)
		{
			newArr[sizeOfNewArr++] = arr[i];
		}
	}
}
