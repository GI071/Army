#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Berserker.h"
using namespace std;



Berserker::Berserker() {
	this->name = "m_Berserker";
	this->health = 500;
	this->healthlimit = 500;
	this->ppower = 50;
	this->points = 0;
	this->state = 1;
};

Berserker::~Berserker(){};
