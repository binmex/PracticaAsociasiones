//
// Created by Binmex on 11/11/2021.
//

#ifndef PRACTICAASOCIASIONES_MATRICULA_H
#define PRACTICAASOCIASIONES_MATRICULA_H
#include "Estudiante.h"

class Estudiante;

class Matricula {
public:
    Matricula(const double costo, double referencia, Estudiante *estudiante);

    virtual ~Matricula();

    const double costo = 100000;

    const double getCosto() const;

    double getReferencia() const;

    void setReferencia(double referencia);

    int getPagos() const;

    void setPagos(int pagos);

    Estudiante *getEstudiante() const;

    void setEstudiante(Estudiante *estudiante);

private:
    double referencia;
    int pagos;

    Estudiante* estudiante;
};


#endif //PRACTICAASOCIASIONES_MATRICULA_H
