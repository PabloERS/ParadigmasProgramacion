#pragma once
#ifndef LEON_H_
#define LEON_H_
#include "comer.h"

class leon : public comer {
    private:
        int x, c, comida;
        comer *Comer;
    public:
        leon();
        void comercomida(comer *Comer, int x, int c) const;
        ~leon();
};

#endif	/*LEON_H_*/