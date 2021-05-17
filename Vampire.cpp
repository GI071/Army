#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Vampire.h"
using namespace std;


Vampire::Vampire() {
			this->name = "m_Vampire";
			this->health = 500;
			this->healthlimit = 500;
			this->ppower = 50;
			this->points = 0;
			this->state = 1;	
		};
Vampire::~Vampire(){};

