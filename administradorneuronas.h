#ifndef ADMINISTRADORNEURONAS_H
#define ADMINISTRADORNEURONAS_H

#include <list>
#include "neurona.h"

class AdministradorNeuronas {
private:
    std::list<Neurona> listaNeuronas;

public:
    void agregarInicio(const Neurona& neurona);
    void agregarFinal(const Neurona& neurona);
    void mostrar();
};

#endif // ADMINISTRADORNEURONAS_H
