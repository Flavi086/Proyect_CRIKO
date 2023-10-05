#include "Tablero.h" 
class Peon {
public:
    Peon();

    bool Peon::EsMovimientoValido(int filaOrigen, int columnaOrigen, int filaDestino, int columnaDestino) {
 
    if (filaDestino < 0 || filaDestino >= TAMANIO_TABLERO || columnaDestino < 0 || columnaDestino >= TAMANIO_TABLERO) {
        return false;
    }

    // Determinar si el peón es blanco o negro según su posición inicial
    Pieza peon = (filaOrigen == 1) ? PEON : peon;

    int filaDiff = filaDestino - filaOrigen;
    int columnaDiff = columnaDestino - columnaOrigen;

    if (peon == PEON) {
        // Peón blanco
        if (filaDiff == 1 && columnaDiff == 0) {
            return true; // Avance de una casilla
        }
        if (filaDiff == 2 && columnaDiff == 0 && filaOrigen == 1) {
            return true; // Avance de dos casillas desde la posición inicial
        }
        
    } else {
        // Peón negro
        if (filaDiff == -1 && columnaDiff == 0) {
            return true; // Avance de una casilla
        }
        if (filaDiff == -2 && columnaDiff == 0 && filaOrigen == 6) {
            return true; // Avance de dos casillas desde la posición inicial
        }
       
    }

    return false; 
    }

}
