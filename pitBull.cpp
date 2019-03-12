//includes. The header file for the base class and the derived class are included
#include <iostream>
#include "dog.h"
#include "pitBull.h"

//using namespace so as not to have to type out std::
using namespace std;

//constructor
pitBull::pitBull(){

}

//destructor
pitBull::~pitBull(){

}

//there is no member function that calls out what the class is. It is only in the base class
//and is inherited into the derived class.