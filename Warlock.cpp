#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Warlock.h"
using namespace std;

Warlock::Warlock() {
			this->name = "m_Warlock";
			this->health = 300;
			this->healthlimit = 300;
			this->ppower = 10;
			this->hpower = 25;
			this->mpower = 50;
			this->points = 0;
			this->state = 1;
};
Warlock::~Warlock(){};

