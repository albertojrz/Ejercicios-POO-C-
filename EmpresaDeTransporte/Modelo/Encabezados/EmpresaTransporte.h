#pragma once

#include "..\Encabezados\Camion.h"

class CEmpresaTransporte{
private:
    // Esta clase no contiene atributos

    // Relaciones
    CCamion* camion1;
    CCamion* camion2;
    CCamion* camion3;
    CCamion* camion4;

public:
    // Métodos
    CEmpresaTransporte();
    CEmpresaTransporte(string pMatricula, double pCapacidad, double pConsumoGasolina, double pCargaActual, string pRutaImagen);
    ~CEmpresaTransporte();
};