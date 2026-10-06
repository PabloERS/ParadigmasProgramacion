#ifndef LEON_CPP_
#define LEON_CPP_
#include "leon.h"	

leon::leon(){
    x = 0;
}

void leon::comercomida(comer *Comer, int x, int c) const{
    printf("El leon esta comiendo carne\n");
}

leon::~leon(){
    x = 0;
}

#endif	/*LEON_CPP_*/
