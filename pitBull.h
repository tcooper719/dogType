//define the header. This is the derived class
#ifndef PITBULL_H_
#define PITBULL_H_

//includes. Also includes the header for the base class
#include <iostream>
#include "dog.h"

//using namespace to allow for less typing
using namespace std;

//define the derived class. This header only constins the constructor and deconstructor.
//their access specifier is set to public. The base class is inherited after the 
//user defined identifier, the colon is placed, and the base class is listed
class pitBull : public dog {
    public:
        pitBull();
        ~pitBull();

};//semicolon to finish the class

//end of the definition for the header file.
#endif