#ifndef WIZARD_H
#define WIZARD_H

#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Action.h"
using namespace std;

class Wizard : public Action {
	public:
		
		Wizard();
		~Wizard();
};

#endif

