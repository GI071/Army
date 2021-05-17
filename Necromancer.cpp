#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Necromancer.h"
using namespace std;

Necromancer::Necromancer() {
			this->name = "m_Necromancer";
			this->health = 300;
			this->healthlimit = 300;
			this->ppower = 10;
			this->hpower = 25;
			this->mpower = 50;
			this->points = 0;
			this->state = 1;
}
Necromancer::~Necromancer(){};

