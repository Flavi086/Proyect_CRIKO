#include "Tablero.h"

class Torre {
public:
    Torre();

    bool Torre::EsMovimientoValido(int filaOrigen, int columnaOrigen, int filaDestino, int columnaDestino) {
    
    if (filaDestino < 0 || filaDestino >= TAMANIO_TABLERO || columnaDestino < 0 || columnaDestino >= TAMANIO_TABLERO) {
        return false;
    }

    // La torre puede moverse en línea recta en filas o columnas
    if (filaOrigen == filaDestino || columnaOrigen == columnaDestino) {
        return true;
    }

    return false;
    }
}


