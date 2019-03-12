//includes. The header for the base class is included
#include <iostream>
#include "dog.h"

//using namespace so that std:: does not need to be used
using namespace std;

//constructor
dog::dog(){

}

//member function that prints out "I'm a dog"
void dog::whatAmI(){
    cout << "I'm a dog" << endl;
}

//destructor
dog::~dog(){

}