#pragma once
#ifndef PERRO_H_
#define PERRO_H_
#include "comer.h"	

class perro : public comer {
    private:
        int x, c, comida;
        comer *Comer;
    public:
        perro();
        void comercomida(comer *Comer, int x, int c) const;
        ~perro();
};

#endif	/*PERRO_H_*/