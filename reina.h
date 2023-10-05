#include "Tablero.h"

class Reina {
public:
    Reina();

    bool Reina::EsMovimientoValido(int filaOrigen, int columnaOrigen, int filaDestino, int columnaDestino) {
    if (filaDestino < 0 || filaDestino >= TAMANIO_TABLERO || columnaDestino < 0 || columnaDestino >= TAMANIO_TABLERO) {
        return false;
    }

    int filaDiff = abs(filaDestino - filaOrigen);
    int columnaDiff = abs(columnaDestino - columnaOrigen);

    // La reina puede moverse en línea recta en filas, columnas o en diagonales
    return (filaDiff == columnaDiff) || (filaDiff == 0) || (columnaDiff == 0);
    }
}