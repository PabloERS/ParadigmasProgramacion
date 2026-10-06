#pragma once
#ifndef COMER_H_
#define COMER_H_

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

class comer {
    private:
        int x, c, comida;
    public:
        comer();
        void comercomida(int x, int c) const;
        ~comer();
};

#endif	/*COMER_H_*/