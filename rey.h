#include "Tablero.h"

class Rey {
public:
    Rey();

    bool Rey::EsMovimientoValido(int filaOrigen, int columnaOrigen, int filaDestino, int columnaDestino) {
    if (filaDestino < 0 || filaDestino >= TAMANIO_TABLERO || columnaDestino < 0 || columnaDestino >= TAMANIO_TABLERO) {
        return false;
    }

    // El rey puede moverse una casilla en cualquier dirección
    int filaDiff = abs(filaDestino - filaOrigen);
    int columnaDiff = abs(columnaDestino - columnaOrigen);

    return (filaDiff <= 1 && columnaDiff <= 1); 
    }
};