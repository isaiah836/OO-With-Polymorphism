#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
using namespace std;

class Characters
{
public:
	Characters();
	Characters(string N, int H);

	string GetName();
	void SetName(string);
	int GetHealth();
	void SetHealth(int);
	virtual void Display();
protected:
	string name;
	int health;
};

class Zombie : public Characters
{
public:
	Zombie();
	Zombie(string N, int H, int BD);
	int GetBiteDamage();
	void SetBiteDamage(int BD);
	void Display() override;
private: 
	int biteDamage;
};
class Goblin : public Characters
{
public:
	Goblin();
	Goblin(string N, string W, int H, int WD);
	int GetWeaponDamage();
	void SetWeaponDamage(int);
	string GetWeapon();
	void SetWeapon(string W);
	void Display() override;
private:
	int weaponDamage;
	string weapon;
};
#endif CHARACTER_H