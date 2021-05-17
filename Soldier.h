#ifndef SOLDIER_H
#define SOLDIER_H

#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Action.h"
using namespace std;


class Soldier : public Action {
	public:
		
		Soldier();
		~Soldier();
};

#endif

