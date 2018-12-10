#include <iostream>
#include <iomanip>
#include "Characters.h"
using namespace std;

//Character constructor 
Characters::Characters() 
{

}

//custom custom character constructor
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

//Function GetHealth definition
int Characters::GetHealth()
{
	return health;
}

//Function SetHealth definition
void Characters::SetHealth(int H)
{
	health = H;
}

//Function Display Character definition
void Characters::Display()
{
	cout << "This Character is named " << name << " with " << health << " health." << endl << endl;
}

//zombie constructor
Zombie::Zombie()
{

}

//custom zombie constructor
Zombie::Zombie(string N, int H, int BD)
{
	name = N;
	health = H;
	biteDamage = BD;
}

//function GetBiteDamage definition
int Zombie::GetBiteDamage()
{
	return biteDamage;
}
//Function SetBiteDamage definition
void Zombie::SetBiteDamage(int BD)
{
	biteDamage = BD;
}

//Function Display zombie info definition
void Zombie::Display()
{
	cout << "This Zombie is named " << name << " with " << health << " health and " << biteDamage << " bite dmage" << endl << endl;
}

//Goblin Constructor
Goblin::Goblin()
{

}


//custom Goblin Constructor
Goblin::Goblin(string N, string W, int H, int WD)
{
	name = N;
	health = H;
	weapon = W;
	weaponDamage = WD;
}

//Function GetWeaponDamage definition
int Goblin::GetWeaponDamage()
{
	return weaponDamage;
}
//Function SetWeaponDamage definition
void Goblin::SetWeaponDamage(int WD)
{
	weaponDamage = WD;
}
//Function GetWeapon definition
string Goblin::GetWeapon()
{
	return weapon;
}
//Function SetWeapon definition
void Goblin::SetWeapon(string W)
{
	weapon = W;
}
//Display goblin information
void Goblin::Display() 
{
	cout << "It is a Goblin name " << name << " with " << health << " health with a " << weapon << ", that does " << weaponDamage << " Amount of Damage" << endl << endl;
}