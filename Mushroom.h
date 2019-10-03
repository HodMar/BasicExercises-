#pragma once
#include "LiveWorld.h"


class Mushroom : public LiveWorld
{
public:

	Mushroom(int age, std::string name, int Legs);
	~Mushroom();
	int Age() override;
	std::string Name() override;
	int Legs() override;

private:
	int mAge;
	std::string mName;
	int mLegs;
};


