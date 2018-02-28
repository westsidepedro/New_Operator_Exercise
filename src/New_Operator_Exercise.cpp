//============================================================================
// Name        : New_Operator_Exercise.cpp
//
// Description : create a class with constructor and destructor -that output txts
//			using 'new' and 'delete' create objects
//			and '->' to call methods
//
//============================================================================

#include <iostream>
#include "Animals.h"
using namespace std;

int main()
    {
    Animals *pDog = new Animals;//create pDog and put inside it the stuff of Animals class
    pDog->setColor("Brown");		//set color with -> b/c used 'new'
    pDog->setName("Rufus");		//set name with -> b/c used 'new'
    pDog->speak();			//run speak with -> b/c used 'new'
    cout << pDog << endl;

    cout << "  xxxx" << endl;

    Animals cat(*pDog);		//create new object cat by(coping what's inside address of pDog)
    cat.setColor("White");	//set color with . b/c didn't use 'new'
    cat.setName("Purrrrfect");	//set name with . b/c didn't use 'new'
    cat.speak();		//run speak with . b/c didn't use 'new'

    cout << "  yyyy" << endl;

    cout << pDog << endl;

    delete pDog;	//delete
    return 0;
    }
