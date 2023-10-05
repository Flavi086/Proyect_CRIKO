#include "Tablero.h"

class Caballo {
public:
    Caballo();
    bool Caballo::EsMovimientoValido(int filaOrigen, int columnaOrigen, int filaDestino, int columnaDestino) {
    if (filaDestino < 0 || filaDestino >= TAMANIO_TABLERO || columnaDestino < 0 || columnaDestino >= TAMANIO_TABLERO) {
        return false;
    }

    // El caballo puede moverse en "L", con una diferencia de 2 en una dirección y 1 en la otra.
    int filaDiff = abs(filaDestino - filaOrigen);
    int columnaDiff = abs(columnaDestino - columnaOrigen);

    return (filaDiff == 1 && columnaDiff == 2) || (filaDiff == 2 && columnaDiff == 1);
    }
}