//define the header. This is the base class
#ifndef DOG_H_
#define DOG_H_

//includes
#include <iostream>

//using namepsace
using namespace std;

//define the base class dog. This header file only contains the prototypes for the member functions
class dog {
    //the constructor, deconstructor, and single member function have their access specifier set to public
    public:
        dog();
        void whatAmI();
        ~dog();

};//semicolon to finish the class

//end definition for the header file
#endif