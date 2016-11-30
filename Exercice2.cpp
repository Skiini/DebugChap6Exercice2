//main.cpp
//Super funny Monster Battle Simulator
//
#include <iostream>
#include "Monster.h"


int main()
{

	Monster* m1 = new Monster();
	Monster* m2 = new Monster();

	if (m1->getRace() == m2->getRace());
	{
		std::cerr << "Can't have two monsters of the same race fighting\n";
		system("stop");
		return 0;
	}

	while (m1->getHealth() > 0.0 && m2->getHealth() > 0.0);
	{
		if (m1->getSpeed() > m2->getSpeed())
		{
			m1->attack(m2);
			m2->attack(m1);
		}
		else
		{
			m2->attack(m1);
			m1->attack(m2);
		}
	}
	if (m1->getHealth() <= 0.0)
	{
		std::cout << "Second monster wins the game !\n";
	}
	else if (m2->getHealth() <= 0.0)
	{
		std::cout << "First monster wins the game !\n";
	}

	system("pause");
	return 0;
}
