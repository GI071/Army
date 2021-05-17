#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Soldier.h"
using namespace std;


Soldier::Soldier() {
			this->name = "m_Soldier";
			this->health = 500;
			this->healthlimit = 500;
			this->ppower = 50;
			this->points = 0;
			this->state = 1;
		}
Soldier::~Soldier(){};


