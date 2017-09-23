/*
Prototype Pattern
Ryan Blakeman
CST 426
*/

using namespace std;
#include <iostream>
#include "Hero.cpp"
#include <typeinfo>

int main()
{
	////Attack Heroes////
	//Tracer
	Hero* attackPrototype_Tracer = new Attack("Tracer", 150, 0, "Pulse Bomb");
	Spawner* attackSpawner_Tracer = new Spawner(attackPrototype_Tracer);
	attackSpawner_Tracer->spawnHero();
	//Sombra
	Hero* attackPrototype_Sombra = new Attack("Sombra", 150, 0, "Hack");
	Spawner* attackSpawner_Sombra = new Spawner(attackPrototype_Tracer);
	cout << "Attack Prototype Type: ";
	cout << typeid(attackPrototype_Tracer).name() << endl;
	cout << "Attack Spawner Type: ";
	cout << typeid(attackSpawner_Tracer).name() << endl;


	////Defense Heroes////
	//Mei
	Hero* defensePrototype_Mei = new Defense("Mei", 300, 0, "Freeze");
	Spawner* defenseSpawner_Mei = new Spawner(defensePrototype_Mei);
	//Bastion
	Hero* defensePrototype_Bastion = new Defense("Bastion", 300, 0, "Cannon");
	Spawner* defenseSpawner_Bastion = new Spawner(defensePrototype_Bastion);

	//Tank Heroes//
	//D.Va
	Hero* tankPrototype_Dva = new Tank("D.Va", 500, 0, "Self-Destruct");
	Spawner* tankSpawner_Dva = new Spawner(tankPrototype_Dva);
	//Reinhardt
	Hero* tankPrototype_Reinhardt = new Tank("Reinhardt", 500, 0, "Hammer Smash");
	Spawner* tankSpawner_Reinhardt = new Spawner(tankPrototype_Reinhardt);


	////Healer Heroes////
	//Mercy
	Hero* healerPrototype_Mercy = new Healer("Mercy", 200, 0, "Revive");
	Spawner* healerSpawner_Mercy = new Spawner(healerPrototype_Mercy);
	//Ana
	Hero* healerPrototype_Ana = new Healer("Ana", 250, 0, "Nano-Boost");
	Spawner* healerSpawner_Ana = new Spawner(healerPrototype_Ana);

	int delay;
	cin >> delay;
	return 0;
}