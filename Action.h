#ifndef ACTION_H
#define ACTION_H

#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Unit.h"
#include "SpellCaster.h"
using namespace std;

class Action : public Unit, public SpellCaster {
	public:
		
		Action(std::string name="", int health=0, int healthlimit=0, int ppower=0, int mpower=0, int points=0, int state=0);
		virtual ~Action();

		void attack(Action& target);
		void counterattack(Action& target);
		void spell(Action& target);
		void heal(Action& target);
		void transform(Action& target);
		void callDemons(Action& target);
		enum SpellCast {
			SPELL_BALL,
			SPELL_ARROW,
			SPELL_THUNDER
		};
		void spellcasting(SpellCast spellcast, Action& target);

};

#endif




