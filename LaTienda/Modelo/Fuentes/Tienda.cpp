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
    bool CTienda::venderProducto(CProducto* pProducto, int pCantidad){
      
      if (pProducto == producto1){
          if(producto1->vender(pCantidad)){
          dineroEnCaja += producto1->darCostoTotal(pCantidad);
          return true;
          } else
          return false;
      }
      else if(pProducto == producto2){
           if(producto2->vender(pCantidad)){
          dineroEnCaja += producto2->darCostoTotal(pCantidad);
          return true;
          } else
          return false;
      }
      else if(pProducto == producto3){
        if(producto3->vender(pCantidad)){
          dineroEnCaja += producto3->darCostoTotal(pCantidad);
          return true;
          } else
          return false;
      }
      else{
        if(producto4->vender(pCantidad)){
          dineroEnCaja += producto4->darCostoTotal(pCantidad);
          return true;
          } else
          return false;
      }
    }
    void CTienda::abastecerProducto(CProducto* pProducto, int pCantidad){
          pProducto->abastecer(pCantidad);
    }