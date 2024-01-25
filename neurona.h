#ifndef NEURONA_H
#define NEURONA_H

class Neurona {
private:
    int id;
    float voltaje;
    int posX;
    int posY;
    int red;
    int green;
    int blue;

public:
    Neurona(int _id, float _voltaje, int _posX, int _posY, int _red, int _green, int _blue);
    void print() const;  // Marcar como constante
};

#endif // NEURONA_H
