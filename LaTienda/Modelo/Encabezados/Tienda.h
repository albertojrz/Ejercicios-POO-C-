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
        bool venderProducto(CProducto* pProducto,int pCantidad );
        void abastecerProducto(CProducto* pProducto, int pCantidad);
        void cambiarProducto(CProducto pProducto, Tipo pTipo, string pNombre, double pValorUnitario,
                             int pCantidadBodega, int pCantidadMinima, int pCantidadUnidadesVendidas);
        CProducto darProductoMasVendido();

};
