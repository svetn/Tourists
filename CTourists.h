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

public:
	std::string getName();
	std::string getPhoneNumber();
	std::string getDesiredCountry();
public:
	int getBirthDate();
	int getGender();
public:
	CTourists();
	CTourists(std::string name, std::string pid, std::string phoneNumber, std::string desiredCountry, float monthlyIncome);
};

