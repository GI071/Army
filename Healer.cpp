#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Healer.h"
using namespace std;



Healer::Healer() {
	this->name = "m_Healer";
	this->health = 300;
	this->healthlimit = 300;
	this->ppower = 10;
	this->hpower = 50;
	this->mpower = 25;
	this->points = 0;
	this->state = 1;
};
Healer::~Healer(){};
