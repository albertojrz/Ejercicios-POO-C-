#pragma once

#include "../Encabezados/Producto.h"

class CTienda{
private:
    // Atributos
        double dineroEnCaja;
    
    // Relaciones
        CProducto* producto1;
        CProducto* producto2;
        CProducto* producto3;
        CProducto* producto4;

public:
    // Constructores y destructor
        CTienda();
        ~CTienda();

    // Métodos
        double darDineroEnCaja();
        bool venderProducto1(int pCnantidad);
        void abastecerProducto1(int pCantidad);
};
