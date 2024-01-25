#include "neurona.h"
#include <iostream>

Neurona::Neurona(int _id, float _voltaje, int _posX, int _posY, int _red, int _green, int _blue)
    : id(_id), voltaje(_voltaje), posX(_posX), posY(_posY), red(_red), green(_green), blue(_blue) {}

void Neurona::print() const {
    std::cout << "ID: " << id << ", Voltaje: " << voltaje << ", PosX: " << posX << ", PosY: " << posY
              << ", Red: " << red << ", Green: " << green << ", Blue: " << blue << std::endl;
}
