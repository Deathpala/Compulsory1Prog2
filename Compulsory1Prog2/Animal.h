#pragma once
#include <string>
#include <iostream>

class Animal
{
public:

	virtual void Speak();

	std::string Name;
	std::string PlaceOFBirth;
	int age;

private:
	int Animal_ID;


};

