#ifndef ROGUE_H
#define ROGUE_H

#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Action.h"

using namespace std;


class Rogue : public Action {
	public:
		
		Rogue();
		~Rogue();
};

#endif

