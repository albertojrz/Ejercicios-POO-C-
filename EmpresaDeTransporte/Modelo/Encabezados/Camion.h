#pragma once

#include <string>
using namespace std;

class CCamion{
private:
    // Atributos
    string matricula;
    double capacidad;
    double consumoGasolina;
    double cargaActual;
    string rutaImagen;

public:
    // Métodos
    CCamion();
    CCamion(string pMatricula, double pCapacidad, double pConsumoGasolina, double pCargaActual, string pRutaImagen);
    
};