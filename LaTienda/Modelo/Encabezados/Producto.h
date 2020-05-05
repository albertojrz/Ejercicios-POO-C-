#pragma once

#include <iostream>
using namespace std;

// Enumeraciones
enum class Tipo{
            PAPELERIA,SUPERMERCADO,DROGUERIA
        };


class CProducto{
private:
// Constantes
        const double IVA_PAPELERIA = 0.16;
        const double IVA_SUPERMERCADO = 0.04;
        const double IVA_DROGUERIA = 0.12;
        

// Atributos
        string nombre;
        Tipo tipo;
        double valorUnitario;
        int cantidadBodega;
        int cantidadMinima;
        int cantidadUnidadesVendidas;
public:
    
    // Constructores y Destructores
        CProducto();
        CProducto(Tipo pTipo, string pNombre, double pValorUnitario, int pCantidadBodega,
                int pCantidadMinima, int pCantidadUnidadesVendidas);
        // No usaremos destructor personalizado ya que no existe ninguna variable dinámica

    // Métodos
        string darNombre(); 
        Tipo darTipo();
        double darValorUnitario(); 
        int darCantidadBodega(); 
        int darCantidadMinima();
        int darCantidadUnidadesVendidas();
        double darIVA();
        bool vender(int pCantidad); 
        void abastecer(int pCantidad);
        double darCostoTotal(int pCantidad);
};