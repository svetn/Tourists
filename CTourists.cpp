#include "CTourists.h"

void CTourists::getData()
{
	std::cin.ignore();
	system("cls");
	std::cout << "Name: "; std::getline(std::cin, name);
	std::cout << "P.I.D: "; std::getline(std::cin, pid);
	std::cout << "Phone number: "; std::getline(std::cin, phoneNumber);
	std::cout << "Desired country to visit: "; std::getline(std::cin, desiredCountry);
	std::cout << "Monthly income: "; std::cin >> monthlyIncome;
}

void CTourists::displayData()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "P.I.D: " << pid << std::endl;
	std::cout << "Phone number: " <<phoneNumber << std::endl;
	std::cout << "Desired country to visit: " << desiredCountry << std::endl;
	std::cout << "Monthly income: " << monthlyIncome << std::endl;
	std::cout << std::endl;
}

std::string CTourists::getName()
{
	return this->name;

}

std::string CTourists::getPhoneNumber()
{
	return this->phoneNumber;
}

std::string CTourists::getDesiredCountry()
{
	return this->desiredCountry;
}

int CTourists::getBirthDate()
{
	int Year, Month;
	char year[2];
	char month[2];
	pid.copy(year, 2, 0); Year = atoi(year);
	pid.copy(month, 2, 2); Month = atoi(month);

	if (Month > 40) Year += 2000;
	else Year += 1900;

	return Year;
}

int CTourists::getGender()
{
	char sex[2];
	pid.copy(sex, 1, 8);
	return atoi(sex) % 2;
}

CTourists::CTourists()
{
	name = "Not entered";
	pid = "0000000000";
	phoneNumber = "Not entered";
	monthlyIncome = 0;
	desiredCountry = "Not entered";
}

CTourists::CTourists(std::string name, std::string pid, std::string phoneNumber, std::string desiredCountry, float monthlyIncome)
{
	this->name = name;
	this->pid = pid;
	this->phoneNumber = phoneNumber;
	this->desiredCountry = desiredCountry;
	this->monthlyIncome = monthlyIncome;
}



