//Thomas Cooper

//include
#include <iostream>
#include "dog.h"
#include "pitBull.h"

//using namespace std so as not to use std::
using namespace std;

//main
int main()
{
    //instantiate base class doggy
    dog doggy;
    //instantiate derived class nala
    pitBull nala;

    //call whatAmI from the derived class, which inherits the function from the base class
    nala.whatAmI();

    return 0;
}