#include "../Encabezados/Tienda.h"

// Constructores y destructor
    CTienda::CTienda(){
        dineroEnCaja = 0;
        producto1 = new CProducto();
        producto2 = new CProducto();
        producto3 = new CProducto();
        producto4 = new CProducto();
    }
   
    CTienda::~CTienda(){
        delete producto1;
        delete producto2;
        delete producto3;
        delete producto4;
    }

// Métodos
    double CTienda::darDineroEnCaja(){
        return dineroEnCaja;
    }
    bool CTienda::venderProducto1(int pCantidad){
        if(producto1->vender(pCantidad)){
         double precioVenta = producto1->darValorUnitario += producto1->darIVA * producto1->darValorUnitario;
            dineroEnCaja += precioVenta * pCantidad;
            return true;
        }
        else
            return false;
    }
    void CTienda::abastecerProducto1(int pCantidad){
        producto1->abastecer(pCantidad);
    }