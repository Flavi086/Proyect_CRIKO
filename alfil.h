#include "Tablero.h"

class Alfil {
public:
    Alfil();
    bool EsMovimientoValido(int filaOrigen, int columnaOrigen, int filaDestino, int columnaDestino);

    bool Alfil::EsMovimientoValido(int filaOrigen, int columnaOrigen, int filaDestino, int columnaDestino) {

    if (filaDestino < 0 || filaDestino >= TAMANIO_TABLERO || columnaDestino < 0 || columnaDestino >= TAMANIO_TABLERO) {
        return false;
    }
    int filaDiff = abs(filaDestino - filaOrigen);
    int columnaDiff = abs(columnaDestino - columnaOrigen);

    return filaDiff == columnaDiff;
    }
}

