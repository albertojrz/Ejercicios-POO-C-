#pragma once

#include <iostream>
using namespace std;

class CProducto{
private:
// Enumeraciones
        enum Tipo{
            PAPELERIA,SUPERMERCADO,DROGUERIA
        };

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
        int ignorarEstaVariable;

public:
    
    // Constructores y Destructores
        CProducto();
        CProducto(Tipo pTipo, string pNombre, double pValorUnitario, int pCantidadBodega,
                int pCantidadMinima, int pCantidadUnidadesVendidas);
            // No usaremos destructor personalizado ya que no existe ninguna variable dinámica

    // Métodos
        string darNombre(); 
        int darTipo();
        double darValorUnitario(); 
        int darCantidadBodega(); 
        int darCantidadMinima();
        int darCantidadUnidadesVendidas();
        double darIVA();
        int vender(int pCantidad); 
        void abastecer(int pCantidad);
};