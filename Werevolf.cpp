#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Werevolf.h"
using namespace std;


Werevolf::Werevolf() {
	this->name = "m_Werevolf";
	this->health = 500;
	this->healthlimit = 500;
	this->ppower = 50;
	this->points = 0;
	this->state = 1;
};
Werevolf::~Werevolf(){};
		
void Werevolf::selftransform() {
			if (this->name == "m_Werevolf") {
				this->name = "wolf";
				this->health = health *2;
				this->ppower = ppower *2;
				std::cout<<"Werevolf selftransform : "<<name<<"||"<<health<<"||"<<ppower<<"||"<<state<<endl;
			} else if (this->name == "wolf") {
				this->name = "m_Werevolf";
				this->health = health / 2;
				this->ppower = ppower / 2;
				std::cout<<"Werevolf selftransformback : "<<name<<"||"<<health<<"||"<<ppower<<"||"<<state<<endl;
			}
};

