#include "Plants.h"



Plants::Plants(int age, std::string name, int Legs)
	: mAge(age)
	, mName(name)
	, mLegs(Legs)
{

}


Plants::~Plants()
{
}

int Plants::Legs()
{
	return mLegs;
}

int Plants::Age()
{
	return mAge;
}

std::string Plants::Name()
{
	return mName;
}