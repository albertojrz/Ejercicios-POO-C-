#include "../Encabezados/Producto.h"
        
    // Constructores
    CProducto::CProducto(){
        nombre = "Default";
        tipo = PAPELERIA;
        valorUnitario = 0.0;
        cantidadBodega = 0;
        cantidadMinima = 0;
        cantidadUnidadesVendidas = 0;
    }
    CProducto::CProducto(Tipo pTipo, string pNombre, double pValorUnitario, int pCantidadBodega,
                        int pCantidadMinima, int pCantidadUnidadesVendidas){
        nombre = pNombre;
        tipo = pTipo;
        valorUnitario = pValorUnitario;
        cantidadBodega = pCantidadBodega;
        cantidadMinima = pCantidadMinima;
        cantidadUnidadesVendidas = pCantidadUnidadesVendidas;
    }
    
    // Métodos
    string CProducto::darNombre(){
       return nombre;
    }   
    int CProducto::darTipo(){
        return tipo;
    }
    double CProducto::darValorUnitario(){
        return valorUnitario;
    }
    int CProducto::darCantidadBodega(){
        return cantidadBodega;
    }
    int CProducto::darCantidadMinima(){
        return cantidadMinima;
    }
    int CProducto::darCantidadUnidadesVendidas(){
        return cantidadUnidadesVendidas;
    }
    double CProducto::darIVA(){
        if(tipo == PAPELERIA)
            return IVA_PAPELERIA;
                else if(tipo == SUPERMERCADO)
                    return IVA_SUPERMERCADO;
                        else
                            return IVA_DROGUERIA;
                    
        /* Con estructura switch
        switch(tipo){
            case PAPELERIA:
                return IVA_PAPELERIA;
                break;
            case SUPERMERCADO:
                return IVA_SUPERMERCADO;
                break;
            case DROGUERIA:
                return IVA_DROGUERIA;
                break; 
        }
        */
    }
    int CProducto::vender(int pCantidad){
        
        if (cantidadBodega < pCantidad)
            return 0;
        else{
            cantidadBodega -= pCantidad;
            cantidadUnidadesVendidas += pCantidad;
            return 1;
        }
    }
    void CProducto::abastecer(int pCantidad){
        cantidadBodega += pCantidad;
    }