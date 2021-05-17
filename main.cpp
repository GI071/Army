#include "Action.h"
#include "Berserker.h"
#include "Healer.h"
#include "Necromancer.h"
#include "Priest.h"
#include "Rogue.h"
#include "Soldier.h"
#include "SpellCaster.h"
#include "Unit.h"
#include "Vampire.h"
#include "Warlock.h"
#include "Werevolf.h"
#include "Wizard.h"
using namespace std;

int main() {
	Soldier soldier;
	Rogue rogue;
	Berserker berserker;
	Vampire vampire;
	Werevolf werevolf;
	
	Wizard wizard;
	Healer healer;
	Priest priest;
	Warlock warlock;
	Necromancer necromancer;
	

	// std::cout<< soldier.name<<"||"<<soldier.health<<"||"<< soldier.ppower<<"||"<<soldier.points<<endl;
	// std::cout<< rogue.name<<" ||"<<rogue.health<<"||"<<rogue.ppower<<"||"<<rogue.points<<endl;
	// std::cout<< berserker.name<<" ||"<<berserker.health<<"||"<<berserker.ppower<<"||"<<berserker.points<<endl;
	// std::cout<< vampire.name<<" ||"<<vampire.health<<"||"<<vampire.ppower<<"||"<<vampire.points<<endl;
	// std::cout<< werevolf.name<<" ||"<<werevolf.health<<"||"<<werevolf.ppower<<"||"<<werevolf.points<<endl;
	// std::cout<< wizard.name<<"||"<<wizard.health<<"||"<<wizard.ppower<<"||"<<wizard.mpower<<"||"<<wizard.hpower<<"||"<<wizard.points<<endl;
	// std::cout<< healer.name<<"||"<<healer.health<<"||"<<healer.ppower<<"||"<<healer.mpower<<"||"<<healer.hpower<<"||"<<healer.points<<endl;
	// std::cout<< priest.name<<"||"<<priest.health<<"||"<<priest.ppower<<"||"<<priest.mpower<<"||"<<priest.hpower<<"||"<<priest.points<<endl;
	// std::cout<< warlock.name<<"||"<<warlock.health<<"||"<<warlock.ppower<<"||"<<warlock.mpower<<"||"<<warlock.hpower<<"||"<<warlock.points<<endl;
	// std::cout<< necromancer.name<<"||"<<necromancer.health<<"||"<<necromancer.ppower<<"||"<<necromancer.mpower<<"||"<<necromancer.hpower<<"||"<<necromancer.points<<endl;
	// std::cout<<"\n";
	
	wizard.attack(soldier);
	soldier.attack(rogue);
	necromancer.attack(soldier);
	rogue.attack(soldier);
	
	
	// wizard.spellcasting(Action::SPELL_BALL, soldier);
	// wizard.spellcasting(Action::SPELL_THUNDER, soldier);
	// soldier.attack(rogue);
	// werevolf.selftransform();
	// rogue.attack(soldier);
	// werevolf.attack(soldier);
	// werevolf.selftransform();
	// soldier.attack(vampire);
	// vampire.attack(wizard);
	// 
	// priest.spell(vampire);
	// priest.spell(necromancer);
	// priest.spell(soldier);
	// wizard.spell(soldier);
	// priest.spell(berserker);
	// 
	// wizard.attack(soldier);
	// wizard.attack(soldier);
	// werevolf.selftransform();
	// werevolf.selftransform();
	// werevolf.transform(soldier);
	// vampire.transform(berserker);
	// warlock.callDemons(vampire);
	
	std::cout<< soldier.name<<"||"<<soldier.health<<"||"<< soldier.ppower<<"||"<<soldier.points<<endl;
	std::cout<< rogue.name<<" ||"<<rogue.health<<"||"<<rogue.ppower<<"||"<<rogue.points<<endl;
	std::cout<< berserker.name<<" ||"<<berserker.health<<"||"<<berserker.ppower<<"||"<<berserker.points<<endl;
	std::cout<< vampire.name<<" ||"<<vampire.health<<"||"<<vampire.ppower<<"||"<<vampire.points<<endl;
	std::cout<< werevolf.name<<" ||"<<werevolf.health<<"||"<<werevolf.ppower<<"||"<<werevolf.points<<endl;
	std::cout<< wizard.name<<"||"<<wizard.health<<"||"<<wizard.ppower<<"||"<<wizard.mpower<<"||"<<wizard.hpower<<"||"<<wizard.points<<endl;
	std::cout<< healer.name<<"||"<<healer.health<<"||"<<healer.ppower<<"||"<<healer.mpower<<"||"<<healer.hpower<<"||"<<healer.points<<endl;
	std::cout<< priest.name<<"||"<<priest.health<<"||"<<priest.ppower<<"||"<<priest.mpower<<"||"<<priest.hpower<<"||"<<priest.points<<endl;
	std::cout<< warlock.name<<"||"<<warlock.health<<"||"<<warlock.ppower<<"||"<<warlock.mpower<<"||"<<warlock.hpower<<"||"<<warlock.points<<endl;
	std::cout<< necromancer.name<<"||"<<necromancer.health<<"||"<<necromancer.ppower<<"||"<<necromancer.mpower<<"||"<<necromancer.hpower<<"||"<<necromancer.points<<endl;
	
    return 0;
}


