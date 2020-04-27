
#include "..\Encabezados\EmpresaTransporte.h"

CEmpresaTransporte::CEmpresaTransporte(){
    camion1 = new CCamion();
    camion2 = new CCamion();
    camion3 = new CCamion();
    camion4 = new CCamion();
}
CEmpresaTransporte::CEmpresaTransporte(string pMatricula, double pCapacidad, double pConsumoGasolina, double pCargaActual, string pRutaImagen){
    camion1 = new CCamion(pMatricula, pCapacidad, pConsumoGasolina, pCargaActual, pRutaImagen);
    camion2 = new CCamion(pMatricula, pCapacidad, pConsumoGasolina, pCargaActual, pRutaImagen);
    camion3 = new CCamion(pMatricula, pCapacidad, pConsumoGasolina, pCargaActual, pRutaImagen);
    camion4 = new CCamion(pMatricula, pCapacidad, pConsumoGasolina, pCargaActual, pRutaImagen);
}
CEmpresaTransporte::~CEmpresaTransporte(){
    delete camion1;
    delete camion2;
    delete camion3;
    delete camion4;
}

