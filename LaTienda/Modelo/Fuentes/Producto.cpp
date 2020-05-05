#include "../Encabezados/Producto.h"
        
    // Constructores
    CProducto::CProducto(){
        nombre = "Default";
        tipo = Tipo::PAPELERIA;
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
    
    Tipo CProducto::darTipo(){
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
    switch(tipo){
       case Tipo::PAPELERIA:
       return IVA_PAPELERIA;

       case Tipo::SUPERMERCADO:
       return IVA_SUPERMERCADO;

       case Tipo::DROGUERIA:
       return IVA_DROGUERIA;
    }
    }
    
    bool CProducto::vender(int pCantidad){
        
        if (cantidadBodega < pCantidad)
            return false;
        else{
            cantidadBodega -= pCantidad;
            cantidadUnidadesVendidas += pCantidad;
            return true;
        }
    }
    void CProducto::abastecer(int pCantidad){
        cantidadBodega += pCantidad;
    }

    double CProducto::darCostoTotal(int pCantidad){
        double aumentoIVA = valorUnitario*darIVA();
        double costo = valorUnitario + aumentoIVA;
        double costoTotal = costo * pCantidad;

        return costoTotal;

    }