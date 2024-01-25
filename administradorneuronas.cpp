#include "administradorneuronas.h"
#include "neurona.h"  // ¡Asegúrate de incluir la cabecera de Neurona!

void AdministradorNeuronas::agregarInicio(const Neurona& neurona) {
    listaNeuronas.push_front(neurona);
}

void AdministradorNeuronas::agregarFinal(const Neurona& neurona) {
    listaNeuronas.push_back(neurona);
}

void AdministradorNeuronas::mostrar() {
    for (const auto& neurona : listaNeuronas) {
        neurona.print();
    }
}
