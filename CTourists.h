#pragma once
#include <iostream>
#include <string>
class CTourists
{
private:
	std::string name;
	std::string pid;
	std::string phoneNumber;
	std::string desiredCountry;
	float monthlyIncome;
public:
	void getData();
	void displayData();
	std::string getName();
	std::string getPhoneNumber();
	std::string getDesiredCountry();
	int getBirthDate();
	int getGender();
	CTourists();
	CTourists(std::string name, std::string pid, std::string phoneNumber, std::string desiredCountry, float monthlyIncome);
};

