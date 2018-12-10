#include <iostream>
#include <iomanip>
#include "Characters.h"
using namespace std;

//Shape constructor 
Characters::Characters() 
{

}

//custom shape constructor
Characters::Characters(string N, int H)
{
	name = N;
	health = H;
}

//function GetName definition
string Characters::GetName() 
{ 
	return name;
}

//Function SetName definition
void Characters::SetName(string N) 
{ 
	name = N;
}

int Characters::GetHealth()
{
	return health;
}

void Characters::SetHealth(int H)
{
	health = H;
}
void Characters::Display()
{
	cout << "This Character is named " << name << " with " << health << " health." << endl << endl;
}

Zombie::Zombie()
{

}

Zombie::Zombie(string N, int H, int BD)
{
	name = N;
	health = H;
	biteDamage = BD;
}
int Zombie::GetBiteDamage()
{
	return biteDamage;
}
void Zombie::SetBiteDamage(int BD)
{
	biteDamage = BD;
}
void Zombie::Display()
{
	cout << "This Zombie is named " << name << " with " << health << " health and " << biteDamage << " bite dmage" << endl << endl;
}
Goblin::Goblin()
{

}

Goblin::Goblin(string N, string W, int H, int WD)
{
	name = N;
	health = H;
	weapon = W;
	weaponDamage = WD;
}
int Goblin::GetWeaponDamage()
{
	return weaponDamage;
}
void Goblin::SetWeaponDamage(int WD)
{
	weaponDamage = WD;
}
string Goblin::GetWeapon()
{
	return weapon;
}
void Goblin::SetWeapon(string W)
{
	weapon = W;
}
void Goblin::Display() 
{
	cout << "It is a Goblin name " << name << " with " << health << " health with a " << weapon << ", that does " << weaponDamage << " Amount of Damage" << endl << endl;
}