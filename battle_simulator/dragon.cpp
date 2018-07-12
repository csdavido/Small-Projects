/*********************************************************************
** Program name: prog
** Author: David Rider
** Date: 2/18/2017
** Description: CS 162 Lab 5: This program is a battle simulator. It
** contains a base monster class which all other classes inherit from.
** It also contains another class (dragon) which inherits from monster
** and acts as a parent class to two additional classes. lab5.cpp fills
** an array of pointers to monster objects with random elements of the
** child classes.
*********************************************************************/
#include <cstdlib>
#include "dragon.hpp"
//OVERLOADED CONSTRUCTOR
Dragon::Dragon() : Monster() {
	attacks = 4;
	strength = 100;
	type = "Dragon";
	total = 0;
}
/****************************************************
** attack() -virtual function that generates a random
** number between 0 and int strength. It adds up each
** attack and returns the value.
****************************************************/
int Dragon::attack() {
	for (int i = 0; i < attacks; i++) {
		total += rand() % strength + 1;
	}
	int ran = rand() % 10 + 1;
	if (ran % 2 == 0) {
		total += rand() % strength + 1;
	}
	return total;
}
//ACCESSOR FUNCTION
string Dragon::getType() {
	return type;
}