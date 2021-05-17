#ifndef WEREVOLF_H
#define WEREVOLF_H

#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Action.h"
using namespace std;

class Werevolf : public Action {
	public:
		
		Werevolf();
		~Werevolf();
		
		void selftransform();
};

#endif

