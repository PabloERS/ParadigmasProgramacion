#include "perro.h"
#include "gato.h"
#include "leon.h"

int main(int argc, char** argv){
    perro miperro;
    gato migato;
    leon mileon;

    miperro.comercomida(NULL, 0, 1);
    migato.comercomida(NULL, 0, 1);
    mileon.comercomida(NULL, 0, 1);

    return 0;
}