#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Priest.h"
using namespace std;


Priest::Priest() {
			this->name = "m_Priest";
			this->health = 300;
			this->healthlimit = 300;
			this->ppower = 10;
			this->hpower = 50;
			this->mpower = 25;
			this->points = 0;
			this->state = 1;
};
Priest::~Priest(){};


