#include "Mushroom.h"



Mushroom::Mushroom(int age, std::string name, int Legs)
	: mAge(age)
	, mName(name)
	, mLegs(Legs)
{
}


Mushroom::~Mushroom()
{
}

int Mushroom::Age()
{
	return mAge;
}

std::string Mushroom::Name()
{
	return mName;
}
int Mushroom::Legs()
{
	return mLegs;
}