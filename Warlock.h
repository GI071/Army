#ifndef WARLOCK_H
#define WARLOCK_H

#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Action.h"
using namespace std;

class Warlock : public Action {
	public:
		
		Warlock();
		~Warlock();
};

#endif

