
#include "..\Encabezados\Camion.h"

CCamion::CCamion(){
    string matricula = "Default";
    double capacidad = 0.0;
    double consumoGasolina = 0.0;
    double cargaActual = 0.0;
    string rutaImagen = "default";
}
CCamion::CCamion(string pMatricula, double pCapacidad, double pConsumoGasolina, double pCargaActual, string pRutaImagen){
    string matricula = pMatricula;
    double capacidad = pCapacidad;
    double consumoGasolina = pConsumoGasolina;
    double cargaActual = pCargaActual;
    string rutaImagen = pRutaImagen;
}