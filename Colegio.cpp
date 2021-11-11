//
// Created by Binmex on 11/11/2021.
//

#include "Colegio.h"


Colegio::Colegio() {

}

void Colegio::pagar_matricula() {

}

Estudiante *Colegio::encontrarEstudiante(std::string) {

    return nullptr;
}

bool Colegio::agregarEstudiante(std::string name, double id,  Genero gener) {
    estudiante.push_back(new Estudiante(name,id,gener)); // push_back envia a array list seecionado los datos
    return true;
}

//retorna Estudiantes
std::vector<Estudiante *> Colegio::getEstudiante()  {
    return std::vector<Estudiante *>(estudiante);
}

std::vector<Matricula *> Colegio::getMatricula(){
    return std::vector<Matricula *>(matricula);
}




