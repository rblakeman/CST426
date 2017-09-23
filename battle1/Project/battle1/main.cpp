/*
Prototype Pattern
Ryan Blakeman
CST 426
*/

using namespace std;
#include <iostream>
#include <string>
#include "Hero.cpp"
#include <typeinfo>

int main()
{
	////Attack Heroes////
	cout << "Attack Hero" << endl;
	//Tracer
	Hero* attackPrototype_Tracer = new Attack("Tracer", 150, 0, "Pulse Bomb");
	cout << "Creating Prototype for [Attack] Hero: Tracer" << endl;
	Spawner* attackSpawner_Tracer = new Spawner(attackPrototype_Tracer);
	cout << "Creating Spawner for 'Tracer' Prototype" << endl;
	Hero* player1 = attackSpawner_Tracer->spawnHero();
	cout << "Spawned [Attack] 'Tracer' Prototype" << endl;
	/*//Sombra
	Hero* attackPrototype_Sombra = new Attack("Sombra", 150, 0, "Hack");
	cout << "Creating Prototype for [Attack] Hero: Sombra" << endl;
	Spawner* attackSpawner_Sombra = new Spawner(attackPrototype_Tracer);
	cout << "Creating Spawner for 'Sombra' Prototype" << endl;
	Hero* enemy1 = attackSpawner_Sombra->spawnHero();
	cout << "Spawned [Attack] 'Sombra' Prototype" << endl;*/
	cout << endl; //spacing

	////Defense Heroes////
	cout << "Defense Hero" << endl;
	//Mei
	Hero* defensePrototype_Mei = new Defense("Mei", 300, 0, "Freeze");
	cout << "Created Prototype for [Defense] Hero: Mei" << endl;
	Spawner* defenseSpawner_Mei = new Spawner(defensePrototype_Mei);
	cout << "Created Spawner for 'Mei' Prototype" << endl;
	Hero* player2 = defenseSpawner_Mei->spawnHero();
	cout << "Spawned [Defense] 'Mei' Prototype" << endl;
	/*//Bastion
	Hero* defensePrototype_Bastion = new Defense("Bastion", 300, 0, "Cannon");
	cout << "Created Prototype for [Defense] Hero: Bastion" << endl;
	Spawner* defenseSpawner_Bastion = new Spawner(defensePrototype_Bastion);
	cout << "Created Spawner for 'Bastion' Prototype" << endl;
	Hero* enemy2 = defenseSpawner_Bastion->spawnHero();
	cout << "Spawned [Defense] 'Bastion' Prototype" << endl;*/
	cout << endl; //spacing

	//Tank Heroes//
	cout << "Tank Hero" << endl;
	//D.Va	
	Hero* tankPrototype_Dva = new Tank("D.Va", 500, 0, "Self-Destruct");
	cout << "Created Prototype for [Tank] Hero: D.Va" << endl;
	Spawner* tankSpawner_Dva = new Spawner(tankPrototype_Dva);
	cout << "Created Spawner for 'D.Va' Prototype" << endl;
	Hero* player3 = tankSpawner_Dva->spawnHero();
	cout << "Spawned [Tank] 'D.Va' Prototype" << endl;
	/*//Reinhardt
	Hero* tankPrototype_Reinhardt = new Tank("Reinhardt", 500, 0, "Hammer Smash");
	cout << "Creating Prototype for [Tank] Hero: Reinhardt" << endl;
	Spawner* tankSpawner_Reinhardt = new Spawner(tankPrototype_Reinhardt);
	cout << "Creating Spawner for 'Reinhardt' Prototype" << endl;
	Hero* enemy3 = tankSpawner_Reinhardt->spawnHero();
	cout << "Spawned [Tank] 'Reinhardt' Prototype" << endl;*/
	cout << endl; //spacing

	////Healer Heroes////
	cout << "Healer Hero" << endl;
	//Mercy
	Hero* healerPrototype_Mercy = new Healer("Mercy", 200, 0, "Revive");
	cout << "Created Prototype for [Healer] Hero: Mercy" << endl;
	Spawner* healerSpawner_Mercy = new Spawner(healerPrototype_Mercy);
	cout << "Created Spawner for 'Mercy' Prototype" << endl;
	Hero* player4 = healerSpawner_Mercy->spawnHero();
	cout << "Spawned [Healer] 'Mercy' Prototype" << endl;
	/*//Ana
	Hero* healerPrototype_Ana = new Healer("Ana", 250, 0, "Nano-Boost");
	cout << "Created Prototype for [Healer] Hero: Ana" << endl;
	Spawner* healerSpawner_Ana = new Spawner(healerPrototype_Ana);
	cout << "Created Spawner for 'Ana' Prototype" << endl;
	Hero* enemy4 = healerSpawner_Ana->spawnHero();
	cout << "Spawned [Healer] 'Ana' Prototype" << endl;*/
	cout << endl; //spacing

	cout << "-----------------------------------------------------------------" << endl;

	//Fight!
	cout << "Shooting an enemy and getting damage adds to your characters 'Ult' Charge" << endl;
	cout << "Player2 'Mei' is shot by Player1 'Tracer'" << endl;
	player1->chargeUltimate(7);
	cout << "Player1 'Tracer' Ultimate is now: " << player1->getUltimate() << "%" << endl;
	cout << "Player2 'Mei' Ultimate is still zero: " << player2->getUltimate() << "%" << endl;
	cout << "..." << endl;
	cout << "The game is in custom mode and after getting another hit, Tracer reaches 100% in her ult charge" << endl;
	player1->chargeUltimate(100);
	cout << "Player1 'Tracer' Ultimate is now: " << player1->getUltimate() << "%" << endl;
	player1->useUltimate();
	cout << "Tracer uses her ultimate" << endl;
	cout << "Tracer's ultimate is now back to 0% charged" << endl;
	cout << "Proof: " << player1->getUltimate() << "%" << endl;


	int delay;
	cin >> delay;
	return 0;
}