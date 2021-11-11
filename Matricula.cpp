//
// Created by Binmex on 11/11/2021.
//

#include "Matricula.h"


const double Matricula::getCosto() const {
    return costo;
}

double Matricula::getReferencia() const {
    return referencia;
}

void Matricula::setReferencia(double referencia) {
    Matricula::referencia = referencia;
}

int Matricula::getPagos() const {
    return pagos;
}

void Matricula::setPagos(int pagos) {
    Matricula::pagos = pagos;
}



Matricula::~Matricula() {

}

Estudiante *Matricula::getEstudiante() const{
    return estudiante;
}

void Matricula::setEstudiante(Estudiante *estudiante) {
    Matricula::estudiante = estudiante;
}

Matricula::Matricula(const double costo, double referencia, Estudiante *estudiante) : costo(costo),
                                                                                      referencia(referencia),
                                                                                      estudiante(estudiante) {}
