#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
using namespace std;

class Unit {
	public:
		std::string name;
		int health;
		int healthlimit;
		int ppower;
		int points;
		int state;
		int observed;
	
	Unit();
	virtual~Unit();
		
};

#endif

