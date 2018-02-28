/*
 * Animals.h
 *
 *  Created on: Feb 22, 2018
 *      Author: jpetterson
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_
#include <iostream>
using namespace std;

class Animals
    {
    private:
	string name;
	string color;

    public:

	Animals();			// constructor
	Animals(const Animals &copied); // copy constructor
	~Animals();			// destructor
	void setName(string inputName);
	void setColor(string inputColor);
	void speak() const;

    };

#endif /* ANIMALS_H_ */
