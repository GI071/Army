#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Rogue.h"
using namespace std;



Rogue::Rogue() {
	this->name = "m_Rogue";
	this->health = 500;
	this->healthlimit = 500;
	this->ppower = 50;
	this->points = 0;
	this->state = 1;
};
Rogue::~Rogue(){};

