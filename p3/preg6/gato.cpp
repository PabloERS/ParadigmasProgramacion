#ifndef GATO_CPP_
#define GATO_CPP_
#include "gato.h"	

gato::gato(){
    x = 0;
}

void gato::comercomida(comer *Comer, int x, int c) const{
    printf("El gato esta comiendo\n");
}

gato::~gato(){
    x = 0;
}

#endif	/*GATO_CPP_*/