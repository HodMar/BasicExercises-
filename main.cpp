#include <iostream>
#include <vector>


#include "Animals.h"
#include "Plants.h"
#include "Mushroom.h"


//DZ: GeoObj -> kugla, kocka
/*
Napišite interface za geometrijsko tijelo i implementacije za kuglu i kocku.
napišite funkciju koja prima polje tijela i ispisuje naziv svakog tijela i njegov volumen.
U program stavite kocku stranica 5 i kuglu polumjera 5 i pozovite funkciju
*/
int main()
{
	std::vector<LiveWorld*> creatures;
	char c;
	for (int i = 0; i != 3; ++i)
	{
		std::cin >> c;
		if (c == 'a')
		{
			creatures.push_back(new Animals(15, "Krc", 4));
		}
		else if (c == 'm')
		{
			creatures.push_back(new Mushroom(2, "Muhara", 0));
		}
		else 
		{
			creatures.push_back(new Plants(1, "Kupus", 0));
		}
	}
	

	for (LiveWorld* i : creatures)
	{
		std::cout << "My name is " << i->Name() <<", I have " << i->Legs() << " legs and I'm " << i->Age() << " old!!!" << std::endl;
		delete i;
	}

}
	