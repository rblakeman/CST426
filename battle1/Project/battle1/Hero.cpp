#include <iostream>
using namespace std;


// Parent
class Hero
{
public:
	virtual ~Hero() {}
	virtual Hero* clone() = 0;

	int getUltimate()
	{
		return ultimate;
	}
	void chargeUltimate(int amount)
	{
		ultimate += amount;
		if (ultimate > 100)
			ultimate = 100;
	}
	void useUltimate()
	{
		ultimate = 0;
	}

private:
	int ultimate = 0; // 0-100%
};


// Spawner
class Spawner
{
public:
	//Constructor
	Spawner(Hero* prototype) {
		this->prototype = prototype;
	}

	Hero* spawnHero()
	{
		return prototype->clone();
	}



private:
	Hero* prototype;
};


// Children
class Attack : public Hero
{
public:
	//Constructor
	Attack(string name, float health, int ultimate, string ability)
	{
		this->name = name;
		this->health = health;
		ultimate = ultimate;
		this->ability = ability;
	}
	virtual Hero* clone()
	{
		return new Attack(name, health, getUltimate(), ability);
	}

	string getName()
	{
		return name;
	}
	float getHealth()
	{
		return health;
	}
	string getAbility()
	{
		return ability;
	}
private:
	string name;
	float health = 200;
	string ability = "Kill";
};

class Defense : public Hero
{
public:
	//Constructor
	Defense(string name, float health, int ultimate, string ability)
	{
		this->name = name;
		this->health = health;
		ultimate = ultimate;
		this->ability = ability;
	}
	virtual Hero* clone()
	{
		return new Defense(name, health, getUltimate(), ability);
	}

	string getName()
	{
		return name;
	}
	float getHealth()
	{
		return health;
	}
	string getAbility()
	{
		return ability;
	}
private:
	string name = "Defense Hero";
	float health = 250;
	string ability = "Stop";
};

class Tank : public Hero
{
public:
	//Constructor
	Tank(string name, float health, int ultimate, string ability)
	{
		this->name = name;
		this->health = health;
		ultimate = ultimate;
		this->ability = ability;
	}
	virtual Hero* clone()
	{
		return new Tank(name, health, getUltimate(), ability);
	}

	string getName()
	{
		return name;
	}
	float getHealth()
	{
		return health;
	}
	string getAbility()
	{
		return ability;
	}
private:
	string name = "Tank Hero";
	float health = 500;
	string ability = "Push";
};

class Healer : public Hero
{
public:
	//Constructor
	Healer(string name, float health, int ultimate, string ability)
	{
		this->name = name;
		this->health = health;
		ultimate = ultimate;
		this->ability = ability;
	}
	virtual Hero* clone()
	{
		return new Healer(name, health, getUltimate(), ability);
	}

	string getName()
	{
		return name;
	}
	float getHealth()
	{
		return health;
	}
	string getAbility()
	{
		return ability;
	}
private:
	string name = "Healer Hero";
	float health = 150;
	string ability = "Revive";
};