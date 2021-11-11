//
// Created by Binmex on 11/11/2021.
//

#ifndef PRACTICAASOCIASIONES_COLEGIO_H
#define PRACTICAASOCIASIONES_COLEGIO_H

#include "Estudiante.h"
#include "Matricula.h"
//Claso Control

class Colegio {
public:
    Colegio();
    void pagar_matricula();
    Estudiante* encontrarEstudiante(std::string);
    bool agregarEstudiante(std::string,double ,Genero);

    /*std::vector<Estudiante *> getEstudiante();

    void setEstudiante(const std::vector<Estudiante *> &estudiante);

    std::vector<Matricula *> getMatricula();

    void setMatricula(const std::vector<Matricula *> &matricula);*/

    std::vector<Estudiante*> getEstudiante();

    std::vector<Matricula*> getMatricula();

private:
    std::vector<Estudiante*>estudiante; //de uno a muchos
    std::vector<Matricula*>matricula; //de uno a muchos


};


#endif //PRACTICAASOCIASIONES_COLEGIO_H
