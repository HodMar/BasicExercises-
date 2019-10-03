#include "Creature.h"
#include <iostream>


Creature::Creature(int legs, int weight, std::string name)
	:mLegs(legs)
	, mWeight(weight)
	, mName(name)
{
}

Creature::~Creature()
{
}


int Creature::getLegs() const
{
	return mLegs;
}
int Creature::getWeight() const {
	return mWeight;
}
std::string Creature::getName() const {

	return mName;
}


void Creature::Walking()
{
	std::cout << "I'm walking" << std::endl;
	
}