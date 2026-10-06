#ifndef PERRO_CPP_
#define PERRO_CPP_
#include "perro.h"	

perro::perro(){
    x = 0;
}

void perro::comercomida(comer *Comer, int x, int c) const{
    printf("El perro esta comiendo huesos\n");
}

perro::~perro(){
    x = 0;
}

#endif	/*PERRO_CPP_*/
