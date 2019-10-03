#include "Animals.h"

Animals::Animals(int age, std::string name, int Legs)
	: mAge(age)
	, mName(name)
	, mLegs(Legs)
{
}

Animals::~Animals()
{
}

int Animals::Age()
{
	return mAge;
}

std::string Animals::Name()
{
	return mName;
}

int Animals::Legs()
{
	return mLegs;
}