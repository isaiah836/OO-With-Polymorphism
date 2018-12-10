#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
using namespace std;

//a class for building characters
class Characters
{
public:
	//character constructor and custom character constructor
	Characters();
	Characters(string N, int H);

	//function that allow the user to change name and health
	string GetName();
	void SetName(string);
	int GetHealth();
	void SetHealth(int);
	virtual void Display();
protected:
	//protected variables for character
	string name;
	int health;
};

//Zombie subclass
class Zombie : public Characters
{
public:
	//Zombie constructor and custom zombie constructor
	Zombie();
	Zombie(string N, int H, int BD);

	//Zombies have bite damage so function that change the bite damage for the zombies created
	int GetBiteDamage();
	void SetBiteDamage(int BD);
	void Display() override;
	
private: 
	//private Bite damage variable
	int biteDamage;
};

//Goblin subclass
class Goblin : public Characters
{
public:
	//goblin constructor and custom goblin constructor
	Goblin();
	Goblin(string N, string W, int H, int WD);

	//function that allow the user to change weapon and weapon damage
	int GetWeaponDamage();
	void SetWeaponDamage(int);
	string GetWeapon();
	void SetWeapon(string W);
	void Display() override;
private:
	//private variables for goblin
	int weaponDamage;
	string weapon;
};
#endif CHARACTER_H