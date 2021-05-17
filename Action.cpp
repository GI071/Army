#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Action.h"
using namespace std;


Action::Action(std::string name, int health, int healthlimit, int ppower, int mpower, int points, int state) {}
Action::~Action(){};

void Action::attack(Action& target) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	
	if (this->health > 0 && target.health > 0) {
		cout<<this->name<< " targeting : " <<target.name<<endl;
		
		std::cout << "target's health: " << target.health;
		target.health -= this->ppower;
		this->points += 1;
		string temp_vampire = typeid(*this).name();
		if (temp_vampire == "7Vampire") {
			std::cout<<"\n";
			std::cout << "7Vampire is " << temp_vampire;
			target.health -= (target.healthlimit/10);
			this->health += (target.healthlimit/10);
		}
		if (target.health < 0) {
			target.health = 0;
			target.state = 0;
		}
		std::cout << " ---> " << target.health;
		std::cout << " alive status: " << target.state << std::endl;
	} else {
		std::cout<<this->name<<" is already dead, can't attack"<<endl;
	}
	
	string temp_rogue = typeid(*this).name();
	if (this->health > 0 && target.health > 0 && temp_rogue != "5Rogue") {
		target.counterattack(*this);
	} else {
		std::cout << target.name<<" can't counterattack "<<std::endl;
	}
	std::cout<<"\n";
	
	
	int * necromancer_ptr;
	int temp_health;
	string temp_necromancer = typeid(*this).name();
	if (temp_necromancer == "11Necromancer") {
		target.observed = 1;	
		cout<<target.name<<" has being observed"<<endl;
		necromancer_ptr = &(this->health);
		temp_health = target.healthlimit / 5;
		
	}
	
	if (target.health <= 0 && target.observed == 1) {
		
		*necromancer_ptr = *necromancer_ptr + temp_health;
		if (this->health > this->healthlimit) {
			this->health = this->healthlimit;
		}
		cout<<"necromancer's health: "<<*necromancer_ptr<<endl;
	}
	std::cout<<"\n";
}

void Action::counterattack(Action& target) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	
	std::cout << name <<" targeting : "<<target.name << std::endl;
	std::cout << "target's health: " << target.health;
	target.health -= ppower/2;
	this->points += 1;
	
	string temp_vampire = typeid(*this).name();
	
	if (temp_vampire == "7Vampire") {
		target.health += (target.healthlimit/10);
		this->health -= (target.healthlimit/10);
	}
	if (target.health < 0) {
			target.health = 0;
			target.state = 0;
	}
	std::cout << " ---> " << target.health;
	std::cout << " alive status: " << target.state << std::endl;
	std::cout<<"\n";
}

void Action::spell(Action& target) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;

	if (target.health > 0 ) {
		std::cout << name << " targeting : " <<target.name << std::endl;
		std::cout << "target's health: " << target.health;
		string temp_priest = typeid(*this).name();
		string temp_target = typeid(target).name();
		
		if (temp_priest == "6Priest" ) {
			if (temp_target == "7Vampire" || temp_target == "11Necromancer") {
			target.health -= mpower;
			this->points += 1;
			}
		}
		target.health -= mpower;
		this->points += 1;
	} else {
		std::cout<<this->name<<" is already dead, can not attack"<<endl;
	}
	
	string temp_target = typeid(target).name();
	if (temp_target == "9Berserker") {
		target.health += mpower;
	}
	if (target.health < 0) {
			target.health = 0;
			target.state = 0;
	}
		
	std::cout << " ---> " << target.health;
	std::cout << " alive status: " << target.state << std::endl;
	std::cout<<"\n";
}

void Action::heal(Action& target) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	std::cout << name << " targeting : " <<target.name << std::endl;
	std::cout << "target's health: " << target.health;
	target.health += hpower;
	this->points += 1;
	if (target.health > target.healthlimit) {
			target.health = target.healthlimit;
		}
	std::cout << " ---> " << target.health;
	std::cout << " alive status: " << target.state << std::endl;
	std::cout<<"\n";
}

void Action::transform(Action& target) {
	if (this->name == "m_Vampire" && target.name != "m_Werevolf") {
		target.name = "m_Vampire";
		target.health = 500;
		target.healthlimit = 500;
		target.ppower = 50;
		std::cout<<"target transformed : "<<name<<"||"<<health<<"||"<<ppower<<"||"<<endl;
	}
	if (this->name == "m_Werevolf" && target.name != "m_Vampire") {
		target.name = "m_Werevolf";
		target.health = 500;
		target.healthlimit = 500;
		target.ppower = 50;
		std::cout<<"target transformed : "<<name<<"||"<<health<<"||"<<ppower<<"||"<<endl;
	}
}

void Action::callDemons(Action& target) {
	if ( this->name == "m_Warlock") {
		this->ppower = 75;
		this->attack(target);
		this->points += 1;
	}
}
			
void Action::spellcasting(Action::SpellCast spellcast, Action& target) {
			
	switch (spellcast) {
		case SPELL_BALL:
			cout<<"SPELL_BALL"<<endl;
			this->mpower = 100;
			this->spell(target);
			this->mpower = 50;
			// break;
		case SPELL_ARROW:
			cout<<"SPELL_ARROW"<<endl;
			this->mpower = 75;
			this->spell(target);
			this->mpower = 50;
			// break;
		case SPELL_THUNDER:
			cout<<"SPELL_THUNDER"<<endl;
			this->mpower = 200;
			this->spell(target);
			this->mpower = 50;
			// break;
		default:
			std::cout<<"SPELL DEFAULT"<<endl;
			this->spell(target);
	}	

};	


