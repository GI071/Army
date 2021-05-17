#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
using namespace std;

class SpellCaster {
	public:
		int mpower;
		int hpower;
	
		SpellCaster();
		virtual ~SpellCaster();

};

#endif

