#ifndef HEALER_H
#define HEALER_H

#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Action.h"
using namespace std;


class Healer : public Action {
	public:
	string name;
	int health;
	int healthlimit;
	int ppower;
	int hpower;
	int mpower;
	int points;
	int state;
		
	Healer();
	~Healer();
};

#endif

