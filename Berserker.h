#ifndef BERSERKER_H
#define BERSERKER_H

#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Action.h"
using namespace std;



class Berserker : public Action {
	public:
		string name;
		int health;
		int healthlimit;
		int ppower;
		int points;
		int state;
		
		Berserker();
		~Berserker();
};

#endif

