//
// Created by Binmex on 11/11/2021.
//

#ifndef PRACTICAASOCIASIONES_ESTUDIANTE_H
#define PRACTICAASOCIASIONES_ESTUDIANTE_H

#include "string"
#include "Matricula.h"
#include "vector"
#include "Genero.h"

class Matricula; //poque relacion circular, da espera a cargar clase

class Estudiante {
public:


    Estudiante(const std::string &name, double id, Genero genero);

    virtual ~Estudiante();

    const std::string &getName() const;

    void setName(const std::string &name);

    double getId() const;

    void setId(double id);

    Genero getGenero() const;

    void setGenero(Genero genero);

   const std::vector<Matricula *> &getMatricula() const;

    void setMatricula(const std::vector<Matricula *> &matricula);

    static std::string parseNum(double );

    std::string toString();

private:
    std::string name;
    double id;
    Genero genero; //relacion de referencia
    std::vector<Matricula*> matricula; //Asociacion

};


#endif //PRACTICAASOCIASIONES_ESTUDIANTE_H
