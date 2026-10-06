#pragma once
#ifndef GATO_H_
#define GATO_H_
#include "comer.h"	

class gato : public comer {
    private:
        int x, c, comida;
        comer *Comer;
    public:
        gato();
        void comercomida(comer *Comer, int x, int c) const;
        ~gato();
};

#endif	/*GATO_H_*/