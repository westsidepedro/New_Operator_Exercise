/*
 * Animals.cpp
 *
 *  Created on: Feb 22, 2018
 *      Author: jpetterson
 */

#include "Animals.h"
#include <iostream>
using namespace std;

Animals::Animals()
    {
    cout << "Animal created." << endl;
    }

Animals::Animals(const Animals &copied) ://copied is coping(ref &) whats inside(*)pDog in this case
	name(copied.name),	//name(pDog.name)
	color(copied.color)	//color(pDog.color)
    {
    cout << "Animal created by copying." << endl;
    }

Animals::~Animals()
    {
    cout << "Destructor called." << endl;
    }

void Animals::setName(string inputName)
    {
    this->name = inputName;	// name is in the private area
    }

void Animals::setColor(string inputColor)
    {
    this->color = inputColor;
    }

void Animals::speak() const
    {
    cout << "Hi, my name is " << name << " and I am " << color << " in color"
	    << endl;

    }
