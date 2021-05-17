#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Wizard.h"
using namespace std;

Wizard::Wizard() {
			this->name = "m_Wizard";
			this->health = 300;
			this->healthlimit = 300;
			this->ppower = 10;
			this->hpower = 25;
			this->mpower = 50;
			this->points = 0;
			this->state = 1;
};
Wizard::~Wizard(){};

